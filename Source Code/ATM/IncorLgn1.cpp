///////////////////////////////////////////////////////////
//  IncorLgn1.cpp
//  Implementation of the Class IncorLgn1 - Concrete Strategy
//  Created on:      03-May-2009 12:01:55 AM
//  Original author: Alex
///////////////////////////////////////////////////////////
#include "StdAfx.h"
#include "IncorLgn1.h"

IncorLgn1::IncorLgn1(){

}

IncorLgn1::~IncorLgn1(){

}

void IncorLgn1::IncorrectLogin()
{// ATM specific message
	cout << "incorrect login" << endl;
}