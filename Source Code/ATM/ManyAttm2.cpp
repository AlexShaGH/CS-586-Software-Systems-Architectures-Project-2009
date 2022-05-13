///////////////////////////////////////////////////////////
//  ManyAttm2.cpp
//  Implementation of the Class ManyAttm2 - Concrete Strategy
//  Created on:      03-May-2009 12:02:01 AM
//  Original author: Alex
///////////////////////////////////////////////////////////
#include "StdAfx.h"
#include "ManyAttm2.h"

ManyAttm2::ManyAttm2(){

}

ManyAttm2::~ManyAttm2(){

}

void ManyAttm2::TooManyAttmMsg()
{// ATM specific message
	cout << "TOO MANY ATTEMPTS" << endl;
}