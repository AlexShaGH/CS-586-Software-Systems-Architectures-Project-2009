///////////////////////////////////////////////////////////
//  DspMenu1.h
//  Implementation of the Class DspMenu1 - Concrete Strategy
//  Created on:      03-May-2009 12:01:56 AM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_A88B9645_6FC1_4cb7_AD35_B93E51E643A9__INCLUDED_)
#define EA_A88B9645_6FC1_4cb7_AD35_B93E51E643A9__INCLUDED_

#include "DspMenu.h"

class DspMenu1 : public DspMenu
{

public:
	DspMenu1();
	virtual ~DspMenu1();

	void DisplayMenu();// ATM specific 

};
#endif // !defined(EA_A88B9645_6FC1_4cb7_AD35_B93E51E643A9__INCLUDED_)
