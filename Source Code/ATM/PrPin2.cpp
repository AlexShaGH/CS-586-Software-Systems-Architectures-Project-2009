///////////////////////////////////////////////////////////
//  PrPin2.cpp
//  Implementation of the Class PrPin2 - Concrete Strategy
//  Created on:      03-May-2009 12:01:54 AM
//  Original author: Alex
///////////////////////////////////////////////////////////
#include "StdAfx.h"
#include "PrPin2.h"

PrPin2::PrPin2(){

}

PrPin2::~PrPin2(){

}

void PrPin2::PromptPin()
{// ATM specific message
	cout << "ENTER PIN" << endl;
}