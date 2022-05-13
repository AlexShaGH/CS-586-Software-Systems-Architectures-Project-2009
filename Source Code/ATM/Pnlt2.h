///////////////////////////////////////////////////////////
//  Pnlt2.h
//  Implementation of the Class Pnlt2 - Concrete Strategy
//  Created on:      03-May-2009 12:02:05 AM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_08DC2A05_9136_45f9_844D_C9051B6FB000__INCLUDED_)
#define EA_08DC2A05_9136_45f9_844D_C9051B6FB000__INCLUDED_

#include "Pnlt.h"
#include "DataATM2.h"

class Pnlt2 : public Pnlt
{

public:
	Pnlt2();
	virtual ~Pnlt2();

	void Penalty(Data* atmData);// ATM specific 

};
#endif // !defined(EA_08DC2A05_9136_45f9_844D_C9051B6FB000__INCLUDED_)
