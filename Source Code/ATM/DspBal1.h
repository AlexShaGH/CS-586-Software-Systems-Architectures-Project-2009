///////////////////////////////////////////////////////////
#pragma once
//  DspBal1.h
//  Implementation of the Class DspBal1 - Concrete Strategy
//  Created on:      03-May-2009 12:01:51 AM
//  Original author: Alex
///////////////////////////////////////////////////////////

#include "DspBal.h"
#include "DataATM1.h"

class DspBal1 : public DspBal
{

public:
	DspBal1();
	virtual ~DspBal1();

	void DisplayBalance(Data* atmData);// ATM specific 

};
