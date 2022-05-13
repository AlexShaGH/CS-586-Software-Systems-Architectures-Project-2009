///////////////////////////////////////////////////////////
//  EjectCard1.cpp
//  Implementation of the Class EjectCard1 - Concrete Strategy
//  Created on:      03-May-2009 12:02:01 AM
//  Original author: Alex
///////////////////////////////////////////////////////////
#include "StdAfx.h"
#include "EjectCard1.h"

EjectCard1::EjectCard1(){

}

EjectCard1::~EjectCard1(){

}

void EjectCard1::EjectCardOp()
{// ATM specific operation
	cout << "card ejected" << endl;
}