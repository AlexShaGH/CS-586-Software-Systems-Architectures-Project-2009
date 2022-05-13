///////////////////////////////////////////////////////////
//  IncorLgn2.cpp
//  Implementation of the Class IncorLgn2 - Concrete Strategy
//  Created on:      03-May-2009 12:01:56 AM
//  Original author: Alex
///////////////////////////////////////////////////////////
#include "StdAfx.h"
#include "IncorLgn2.h"

IncorLgn2::IncorLgn2(){

}

IncorLgn2::~IncorLgn2(){

}

void IncorLgn2::IncorrectLogin()
{// ATM specific message
	cout << "INCORRECT LOGIN" << endl;
}