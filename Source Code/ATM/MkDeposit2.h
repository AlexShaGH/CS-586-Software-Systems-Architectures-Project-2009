///////////////////////////////////////////////////////////
//  MkDeposit2.h
//  Implementation of the Class MkDeposit2 - Concrete Strategy
//  Created on:      03-May-2009 12:02:08 AM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_864DFCA5_A07E_49f9_B793_6F7B917C65A5__INCLUDED_)
#define EA_864DFCA5_A07E_49f9_B793_6F7B917C65A5__INCLUDED_

#include "MkDeposit.h"
#include "DataATM2.h"

class MkDeposit2 : public MkDeposit
{

public:
	MkDeposit2();
	virtual ~MkDeposit2();

	void MakeDeposit(Data* atmData);// ATM specific 

};
#endif // !defined(EA_864DFCA5_A07E_49f9_B793_6F7B917C65A5__INCLUDED_)
