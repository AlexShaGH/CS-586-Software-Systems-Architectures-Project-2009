///////////////////////////////////////////////////////////
//  MkDeposit2.cpp
//  Implementation of the Class MkDeposit2 - Concrete Strategy
//  Created on:      03-May-2009 12:02:09 AM
//  Original author: Alex
///////////////////////////////////////////////////////////
#include "StdAfx.h"
#include "MkDeposit2.h"

MkDeposit2::MkDeposit2(){

}

MkDeposit2::~MkDeposit2(){

}

void MkDeposit2::MakeDeposit(Data* atmData)
{
	DataATM2* dt = (DataATM2*)atmData;// get access to the data
	dt->b = dt->b + dt->dp;// process deposit
	cout << "DEPOSITED" << endl;// ATM specific message
}