///////////////////////////////////////////////////////////
//  PrPin1.h
//  Implementation of the Class PrPin1 - Concrete Strategy
//  Created on:      03-May-2009 12:01:53 AM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_333A30EC_C465_4c67_A506_4A1A07DED7C4__INCLUDED_)
#define EA_333A30EC_C465_4c67_A506_4A1A07DED7C4__INCLUDED_

#include "PrPin.h"

class PrPin1 : public PrPin
{

public:
	PrPin1();
	virtual ~PrPin1();

	void PromptPin();// ATM specific 

};
#endif // !defined(EA_333A30EC_C465_4c67_A506_4A1A07DED7C4__INCLUDED_)
