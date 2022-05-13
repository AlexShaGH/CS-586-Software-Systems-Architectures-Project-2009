///////////////////////////////////////////////////////////
//  EjectCard2.h
//  Implementation of the Class EjectCard2 - Concrete Strategy
//  Created on:      03-May-2009 12:02:02 AM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_2F190165_9A30_4237_85F2_E3F2514E234E__INCLUDED_)
#define EA_2F190165_9A30_4237_85F2_E3F2514E234E__INCLUDED_

#include "EjectCard.h"

class EjectCard2 : public EjectCard
{

public:
	EjectCard2();
	virtual ~EjectCard2();

	void EjectCardOp();// ATM specific 

};
#endif // !defined(EA_2F190165_9A30_4237_85F2_E3F2514E234E__INCLUDED_)
