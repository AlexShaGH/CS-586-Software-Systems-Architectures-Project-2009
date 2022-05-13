///////////////////////////////////////////////////////////
//  MkDeposit.h
//  Implementation of the Class MkDeposit - Abstract Strategy
//  Created on:      03-May-2009 12:01:47 AM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_D2A7F192_BE81_4bd0_9633_DC1873C383FE__INCLUDED_)
#define EA_D2A7F192_BE81_4bd0_9633_DC1873C383FE__INCLUDED_

#include "iostream"
#include "Data.h"

using namespace std; 

class MkDeposit
{

public:
	MkDeposit();
	virtual ~MkDeposit();

	virtual void MakeDeposit(Data* atmData) = 0;// pure virtual

};
#endif // !defined(EA_D2A7F192_BE81_4bd0_9633_DC1873C383FE__INCLUDED_)
