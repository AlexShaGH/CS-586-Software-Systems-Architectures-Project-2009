///////////////////////////////////////////////////////////
//  EjectCard2.cpp
//  Implementation of the Class EjectCard2 - Concrete Strategy
//  Created on:      03-May-2009 12:02:02 AM
//  Original author: Alex
///////////////////////////////////////////////////////////
#include "StdAfx.h"
#include "EjectCard2.h"

EjectCard2::EjectCard2(){

}

EjectCard2::~EjectCard2(){

}

void EjectCard2::EjectCardOp()
{// ATM specific operation
	cout << "CARD EJECTED" << endl;
}