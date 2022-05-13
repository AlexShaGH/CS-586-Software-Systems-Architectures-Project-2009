///////////////////////////////////////////////////////////
#pragma once
//  DspBal2.h
//  Implementation of the Class DspBal2 - Concrete Strategy
//  Created on:      03-May-2009 12:01:52 AM
//  Original author: Alex
///////////////////////////////////////////////////////////

#include "DspBal.h"
#include "DataATM2.h"

class DspBal2 : public DspBal
{

public:
	DspBal2();
	virtual ~DspBal2();

	void DisplayBalance(Data* atmData);// ATM specific 

};
