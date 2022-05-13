///////////////////////////////////////////////////////////
//  Pnlt1.h
//  Implementation of the Class Pnlt1 - Concrete Strategy
//  Created on:      03-May-2009 12:02:04 AM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_FC3EEAE8_3DE7_42c2_994F_991232698C55__INCLUDED_)
#define EA_FC3EEAE8_3DE7_42c2_994F_991232698C55__INCLUDED_

#include "Pnlt.h"
#include "DataATM1.h"

class Pnlt1 : public Pnlt
{

public:
	Pnlt1();
	virtual ~Pnlt1();

	void Penalty(Data* atmData);// ATM specific 

};
#endif // !defined(EA_FC3EEAE8_3DE7_42c2_994F_991232698C55__INCLUDED_)
