///////////////////////////////////////////////////////////
//  PrPin1.cpp
//  Implementation of the Class PrPin1 - Concrete Strategy
//  Created on:      03-May-2009 12:01:53 AM
//  Original author: Alex
///////////////////////////////////////////////////////////
#include "StdAfx.h"
#include "PrPin1.h"

PrPin1::PrPin1(){

}

PrPin1::~PrPin1(){

}

void PrPin1::PromptPin()
{// ATM specific message
	cout << "enter pin" << endl;
}