///////////////////////////////////////////////////////////
//  BelowMinBal2.h
//  Implementation of the Class BelowMinBal2 - Concrete Strategy
//  Created on:      03-May-2009 12:02:03 AM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_0B3434A6_042D_410d_BEBE_C887D17A94B7__INCLUDED_)
#define EA_0B3434A6_042D_410d_BEBE_C887D17A94B7__INCLUDED_

#include "BelowMinBal.h"

class BelowMinBal2 : public BelowMinBal
{

public:
	BelowMinBal2();
	virtual ~BelowMinBal2();

	void BelowMinBMsg();// ATM specific 

};
#endif // !defined(EA_0B3434A6_042D_410d_BEBE_C887D17A94B7__INCLUDED_)
