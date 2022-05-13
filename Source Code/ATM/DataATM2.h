///////////////////////////////////////////////////////////
//  DataATM2.h
//  Implementation of the Class DataATM2 - ATM specific data
//  Created on:      02-May-2009 7:38:38 PM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_D90096B1_DB11_4563_8213_F692D3C6B4DA__INCLUDED_)
#define EA_D90096B1_DB11_4563_8213_F692D3C6B4DA__INCLUDED_

#include <string>
#include <iostream>

#include "Data.h"

using namespace std;

class DataATM2 : public Data
{

public:
	DataATM2();
	virtual ~DataATM2();

	float b;		// balance
	string pn;		// pin
	string id;		// card ID
	float dp;		// temp storage for deposit amount
	float wd;		// temp storage for withdrawal amount
	int maxatt;		// maximum allowed attempts for incorrect pin
	float minbal;	// minimum balance
	float tempb;	// temp storage for balance value
	float penalty;	// penalty amount

};
#endif // !defined(EA_D90096B1_DB11_4563_8213_F692D3C6B4DA__INCLUDED_)
