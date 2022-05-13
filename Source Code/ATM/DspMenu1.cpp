///////////////////////////////////////////////////////////
//  DspMenu1.cpp
//  Implementation of the Class DspMenu1 - Concrete Strategy
//  Created on:      03-May-2009 12:01:57 AM
//  Original author: Alex
///////////////////////////////////////////////////////////
#include "StdAfx.h"
#include "DspMenu1.h"

DspMenu1::DspMenu1(){

}

DspMenu1::~DspMenu1(){

}

void DspMenu1::DisplayMenu()
{// display ATM specific menu
	cout << " transaction menu:" << endl;
	cout << "   balance" << endl;
	cout << "   deposit" << endl;
	cout << "   withdraw" << endl;
	cout << "   exit" << endl;
}