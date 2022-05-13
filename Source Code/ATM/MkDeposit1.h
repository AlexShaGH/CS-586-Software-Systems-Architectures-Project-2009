///////////////////////////////////////////////////////////
//  MkDeposit1.h
//  Implementation of the Class MkDeposit1 - Concrete Strategy
//  Created on:      03-May-2009 12:02:07 AM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_29B8DF2E_EC79_4d41_AFC5_3CE50CA77A50__INCLUDED_)
#define EA_29B8DF2E_EC79_4d41_AFC5_3CE50CA77A50__INCLUDED_

#include "MkDeposit.h"
#include "DataATM1.h"

class MkDeposit1 : public MkDeposit
{

public:
	MkDeposit1();
	virtual ~MkDeposit1();

	void MakeDeposit(Data* atmData);// ATM specific 

};
#endif // !defined(EA_29B8DF2E_EC79_4d41_AFC5_3CE50CA77A50__INCLUDED_)
