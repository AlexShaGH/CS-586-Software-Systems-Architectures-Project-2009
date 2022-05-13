///////////////////////////////////////////////////////////
//  IncorPin.h
//  Implementation of the Class IncorPin - Abstract Strategy
//  Created on:      03-May-2009 12:01:45 AM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_9B055C5B_3BA5_49b8_9D90_8F454A2C45A7__INCLUDED_)
#define EA_9B055C5B_3BA5_49b8_9D90_8F454A2C45A7__INCLUDED_

#include "iostream"

using namespace std; 

class IncorPin
{

public:
	IncorPin();
	virtual ~IncorPin();

	virtual void IncorrectPin() = 0;// pure virtual

};
#endif // !defined(EA_9B055C5B_3BA5_49b8_9D90_8F454A2C45A7__INCLUDED_)
