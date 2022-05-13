///////////////////////////////////////////////////////////
//  IncorPin2.h
//  Implementation of the Class IncorPin2 - Concrete Strategy
//  Created on:      03-May-2009 12:01:59 AM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_EFC1E6F6_FA8B_4041_8C46_22E33C60538F__INCLUDED_)
#define EA_EFC1E6F6_FA8B_4041_8C46_22E33C60538F__INCLUDED_

#include "IncorPin.h"

class IncorPin2 : public IncorPin
{

public:
	IncorPin2();
	virtual ~IncorPin2();

	void IncorrectPin();// ATM specific 

};
#endif // !defined(EA_EFC1E6F6_FA8B_4041_8C46_22E33C60538F__INCLUDED_)
