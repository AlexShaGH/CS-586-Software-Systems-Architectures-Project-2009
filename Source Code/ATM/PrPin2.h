///////////////////////////////////////////////////////////
//  PrPin2.h
//  Implementation of the Class PrPin2 - Concrete Strategy
//  Created on:      03-May-2009 12:01:54 AM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_3DBA2B98_B021_4b00_8387_4CA1A3F0C26F__INCLUDED_)
#define EA_3DBA2B98_B021_4b00_8387_4CA1A3F0C26F__INCLUDED_

#include "PrPin.h"

class PrPin2 : public PrPin
{

public:
	PrPin2();
	virtual ~PrPin2();

	void PromptPin();// ATM specific 

};
#endif // !defined(EA_3DBA2B98_B021_4b00_8387_4CA1A3F0C26F__INCLUDED_)
