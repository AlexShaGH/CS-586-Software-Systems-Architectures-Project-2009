///////////////////////////////////////////////////////////
//  IncorPin1.cpp
//  Implementation of the Class IncorPin1 - Concrete Strategy
//  Created on:      03-May-2009 12:01:58 AM
//  Original author: Alex
///////////////////////////////////////////////////////////
#include "StdAfx.h"
#include "IncorPin1.h"

IncorPin1::IncorPin1(){

}

IncorPin1::~IncorPin1(){

}

void IncorPin1::IncorrectPin()
{// ATM specific message
	cout << "incorrect pin" << endl;
}