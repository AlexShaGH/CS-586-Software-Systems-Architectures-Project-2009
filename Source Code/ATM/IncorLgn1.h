///////////////////////////////////////////////////////////
//  IncorLgn1.h
//  Implementation of the Class IncorLgn1 - Concrete Strategy
//  Created on:      03-May-2009 12:01:55 AM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_4FA56259_C378_4c88_9B7A_F4A8DCEDC7CA__INCLUDED_)
#define EA_4FA56259_C378_4c88_9B7A_F4A8DCEDC7CA__INCLUDED_

#include "IncorLgn.h"

class IncorLgn1 : public IncorLgn
{

public:
	IncorLgn1();
	virtual ~IncorLgn1();

	void IncorrectLogin();// ATM specific 

};
#endif // !defined(EA_4FA56259_C378_4c88_9B7A_F4A8DCEDC7CA__INCLUDED_)
