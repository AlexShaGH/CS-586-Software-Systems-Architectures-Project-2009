///////////////////////////////////////////////////////////
//  ManyAttm1.cpp
//  Implementation of the Class ManyAttm1 - Concrete Strategy
//  Created on:      03-May-2009 12:02:00 AM
//  Original author: Alex
///////////////////////////////////////////////////////////
#include "StdAfx.h"
#include "ManyAttm1.h"

ManyAttm1::ManyAttm1(){

}

ManyAttm1::~ManyAttm1(){

}

void ManyAttm1::TooManyAttmMsg()
{// ATM specific message
	cout << "too many attempts" << endl;
}