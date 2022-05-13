///////////////////////////////////////////////////////////
//  PrPin.h
//  Implementation of the Class PrPin - Abstract Strategy
//  Created on:      03-May-2009 12:01:43 AM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_FDFE3A54_FF0B_41a5_A3CD_2CC42CC01E31__INCLUDED_)
#define EA_FDFE3A54_FF0B_41a5_A3CD_2CC42CC01E31__INCLUDED_

#include "iostream"

using namespace std; 

class PrPin
{

public:
	PrPin();
	virtual ~PrPin();

	virtual void PromptPin() = 0;// pure virtual

};
#endif // !defined(EA_FDFE3A54_FF0B_41a5_A3CD_2CC42CC01E31__INCLUDED_)
