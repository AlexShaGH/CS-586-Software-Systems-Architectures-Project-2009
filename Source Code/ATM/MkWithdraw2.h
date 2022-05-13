///////////////////////////////////////////////////////////
//  MkWithdraw2.h
//  Implementation of the Class MkWithdraw2 - Concrete Strategy
//  Created on:      03-May-2009 12:02:07 AM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_B7BB7BCD_E534_4945_BDD9_6A8AECCF0AC0__INCLUDED_)
#define EA_B7BB7BCD_E534_4945_BDD9_6A8AECCF0AC0__INCLUDED_

#include "MkWithdraw.h"
#include "DataATM2.h"

class MkWithdraw2 : public MkWithdraw
{

public:
	MkWithdraw2();
	virtual ~MkWithdraw2();

	void MakeWithdraw(Data* atmData);// ATM specific 

};
#endif // !defined(EA_B7BB7BCD_E534_4945_BDD9_6A8AECCF0AC0__INCLUDED_)
