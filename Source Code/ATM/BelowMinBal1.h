///////////////////////////////////////////////////////////
//  BelowMinBal1.h
//  Implementation of the Class BelowMinBal1 - Concrete Strategy
//  Created on:      03-May-2009 12:02:03 AM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_D7332F86_80E1_4163_949B_C305935CB0BE__INCLUDED_)
#define EA_D7332F86_80E1_4163_949B_C305935CB0BE__INCLUDED_

#include "BelowMinBal.h"

class BelowMinBal1 : public BelowMinBal
{

public:
	BelowMinBal1();
	virtual ~BelowMinBal1();

	void BelowMinBMsg();// ATM specific 

};
#endif // !defined(EA_D7332F86_80E1_4163_949B_C305935CB0BE__INCLUDED_)
