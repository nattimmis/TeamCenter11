/*********************************************************************************************
** File Name:         Ng5_EngPartRevisionImpl.cxx
**
** File Description:
	This file contains the implementation for the Business Object Ng5_EngPartRevisionImpl.cxx
**
** History:
**   mm/dd/yyyy  Name          Comments
**   ----------  ------------- -------------------------
**   12/09/2016  Avinash Mandru      Initial Version
	
*********************************************************************************************/


#include <Ng5Core/Ng5_EngPartRevisionImpl.hxx>

#include <fclasses/tc_string.h>
#include <Ng5Core/Ng5Core_Std_Defines.h>
#include <tc/tc.h>
#include "Ng5_CommonUtils.hxx"

using namespace ng5newgeneration;


//----------------------------------------------------------------------------------
// Ng5_EngPartRevisionImpl::Ng5_EngPartRevisionImpl(Ng5_EngPartRevision& busObj)
// Constructor for the class
//----------------------------------------------------------------------------------
Ng5_EngPartRevisionImpl::Ng5_EngPartRevisionImpl( Ng5_EngPartRevision& busObj )
   : Ng5_EngPartRevisionGenImpl( busObj )
{
}

//----------------------------------------------------------------------------------
// Ng5_EngPartRevisionImpl::~Ng5_EngPartRevisionImpl()
// Destructor for the class
//----------------------------------------------------------------------------------
Ng5_EngPartRevisionImpl::~Ng5_EngPartRevisionImpl()
{
}

//----------------------------------------------------------------------------------
// Ng5_EngPartRevisionImpl::initializeClass
// This method is used to initialize this Class
//----------------------------------------------------------------------------------
int Ng5_EngPartRevisionImpl::initializeClass()
{
    int ifail = ITK_ok;
    static bool initialized = true;

    if( !initialized )
    {
        ifail = Ng5_EngPartRevisionGenImpl::initializeClass( );
        if ( ifail == ITK_ok )
        {
            initialized = true;
        }
    }
    return ifail;
}


