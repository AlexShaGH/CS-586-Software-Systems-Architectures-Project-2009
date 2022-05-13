///////////////////////////////////////////////////////////
//  DspMenu.h
//  Implementation of the Class DspMenu - Abstract Strategy
//  Created on:      03-May-2009 12:01:47 AM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_F1ACDF2D_66BA_4a69_B445_B9F5C4A34B5E__INCLUDED_)
#define EA_F1ACDF2D_66BA_4a69_B445_B9F5C4A34B5E__INCLUDED_

#include "iostream"

using namespace std; 

class DspMenu
{

public:
	DspMenu();
	virtual ~DspMenu();

	virtual void DisplayMenu() = 0;// pure virtual

};
#endif // !defined(EA_F1ACDF2D_66BA_4a69_B445_B9F5C4A34B5E__INCLUDED_)
