#pragma once
///////////////////////////////////////////////////////////
//  DspBal.h
//  Implementation of the Class DspBal - Abstract Strategy
//  Created on:      03-May-2009 12:01:43 AM
//  Original author: Alex
///////////////////////////////////////////////////////////


#include "iostream"
#include "Data.h"

using namespace std; 

class DspBal
{

public:
	DspBal();
	virtual ~DspBal();

	virtual void DisplayBalance(Data* atmData) = 0;// pure virtual

};
