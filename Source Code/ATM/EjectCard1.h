///////////////////////////////////////////////////////////
//  EjectCard1.h
//  Implementation of the Class EjectCard1 - Concrete Strategy
//  Created on:      03-May-2009 12:02:01 AM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_D4667B5D_7614_43aa_A44E_A700C8FFA22E__INCLUDED_)
#define EA_D4667B5D_7614_43aa_A44E_A700C8FFA22E__INCLUDED_

#include "EjectCard.h"

class EjectCard1 : public EjectCard
{

public:
	EjectCard1();
	virtual ~EjectCard1();

	void EjectCardOp();// ATM specific 

};
#endif // !defined(EA_D4667B5D_7614_43aa_A44E_A700C8FFA22E__INCLUDED_)
