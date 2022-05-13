///////////////////////////////////////////////////////////
//  DataATM1.h
//  Implementation of the Class DataATM1 - ATM specific data
//  Created on:      02-May-2009 7:38:38 PM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_65B774A2_025A_40f9_900D_611A0A99F9A0__INCLUDED_)
#define EA_65B774A2_025A_40f9_900D_611A0A99F9A0__INCLUDED_

#include "Data.h"

class DataATM1 : public Data
{

public:
	DataATM1();
	virtual ~DataATM1();

	int b;		// balance
	int pn;		// pin
	int id;		// card ID
	int dp;		// temp storage for deposit amount
	int wd;		// temp storage for withdrawal amount
	int maxatt;	// maximum allowed attempts for incorrect pin
	int minbal;	// minimum balance
	int tempb;	// temp storage for balance value
	int penalty;// penalty amount

};
#endif // !defined(EA_65B774A2_025A_40f9_900D_611A0A99F9A0__INCLUDED_)
