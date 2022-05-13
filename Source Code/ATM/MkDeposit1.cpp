///////////////////////////////////////////////////////////
//  MkDeposit1.cpp
//  Implementation of the Class MkDeposit1 - Concrete Strategy
//  Created on:      03-May-2009 12:02:08 AM
//  Original author: Alex
///////////////////////////////////////////////////////////
#include "StdAfx.h"
#include "MkDeposit1.h"

MkDeposit1::MkDeposit1(){

}

MkDeposit1::~MkDeposit1(){

}

void MkDeposit1::MakeDeposit(Data* atmData)
{
	DataATM1* dt = (DataATM1*)atmData;// get access to the data
	dt->b = dt->b + dt->dp;// process deposit
	cout << "deposited" << endl;// ATM specific message
}