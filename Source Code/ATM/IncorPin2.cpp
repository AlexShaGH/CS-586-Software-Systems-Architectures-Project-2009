///////////////////////////////////////////////////////////
//  IncorPin2.cpp
//  Implementation of the Class IncorPin2 - Concrete Strategy
//  Created on:      03-May-2009 12:01:59 AM
//  Original author: Alex
///////////////////////////////////////////////////////////
#include "StdAfx.h"
#include "IncorPin2.h"

IncorPin2::IncorPin2(){

}

IncorPin2::~IncorPin2(){

}

void IncorPin2::IncorrectPin()
{// ATM specific message
	cout << "INCORRECT PIN" << endl;
}