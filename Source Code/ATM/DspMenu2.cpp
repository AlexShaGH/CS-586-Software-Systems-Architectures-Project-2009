///////////////////////////////////////////////////////////
//  DspMenu2.cpp
//  Implementation of the Class DspMenu2 - Concrete Strategy
//  Created on:      03-May-2009 12:01:57 AM
//  Original author: Alex
///////////////////////////////////////////////////////////
#include "StdAfx.h"
#include "DspMenu2.h"

DspMenu2::DspMenu2(){

}

DspMenu2::~DspMenu2(){

}

void DspMenu2::DisplayMenu()
{// display ATM specific menu
	cout << " TRANSACTION MENU:" << endl;
	cout << "   BALANCE" << endl;
	cout << "   DEPOSIT" << endl;
	cout << "   WITHDRAW" << endl;
	cout << "   EXIT" << endl;
}