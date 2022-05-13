///////////////////////////////////////////////////////////
//  MkWithdraw1.h
//  Implementation of the Class MkWithdraw1 - Concrete Strategy
//  Created on:      03-May-2009 12:02:06 AM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_4725FB64_DE71_40ba_AB1B_05FBFB756533__INCLUDED_)
#define EA_4725FB64_DE71_40ba_AB1B_05FBFB756533__INCLUDED_

#include "MkWithdraw.h"
#include "DataATM1.h"

class MkWithdraw1 : public MkWithdraw
{

public:
	MkWithdraw1();
	virtual ~MkWithdraw1();

	void MakeWithdraw(Data* atmData);// ATM specific 

};
#endif // !defined(EA_4725FB64_DE71_40ba_AB1B_05FBFB756533__INCLUDED_)
