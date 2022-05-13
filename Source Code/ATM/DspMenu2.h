///////////////////////////////////////////////////////////
//  DspMenu2.h
//  Implementation of the Class DspMenu2 - Concrete Strategy
//  Created on:      03-May-2009 12:01:57 AM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_28AE6082_75AF_4262_8A85_F5E4F8C8CC33__INCLUDED_)
#define EA_28AE6082_75AF_4262_8A85_F5E4F8C8CC33__INCLUDED_

#include "DspMenu.h"

class DspMenu2 : public DspMenu
{

public:
	DspMenu2();
	virtual ~DspMenu2();

	void DisplayMenu();// ATM specific 

};
#endif // !defined(EA_28AE6082_75AF_4262_8A85_F5E4F8C8CC33__INCLUDED_)
