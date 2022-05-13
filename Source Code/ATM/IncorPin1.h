///////////////////////////////////////////////////////////
//  IncorPin1.h
//  Implementation of the Class IncorPin1 - Concrete Strategy
//  Created on:      03-May-2009 12:01:58 AM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_669D820F_E5C9_4fae_A13E_B009635C7A42__INCLUDED_)
#define EA_669D820F_E5C9_4fae_A13E_B009635C7A42__INCLUDED_

#include "IncorPin.h"

class IncorPin1 : public IncorPin
{

public:
	IncorPin1();
	virtual ~IncorPin1();

	void IncorrectPin();// ATM specific 

};
#endif // !defined(EA_669D820F_E5C9_4fae_A13E_B009635C7A42__INCLUDED_)
