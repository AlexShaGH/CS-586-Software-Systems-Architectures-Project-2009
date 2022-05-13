///////////////////////////////////////////////////////////
//  MkWithdraw1.cpp
//  Implementation of the Class MkWithdraw1 - Concrete Strategy
//  Created on:      03-May-2009 12:02:06 AM
//  Original author: Alex
///////////////////////////////////////////////////////////
#include "StdAfx.h"
#include "MkWithdraw1.h"

MkWithdraw1::MkWithdraw1(){

}

MkWithdraw1::~MkWithdraw1(){

}

void MkWithdraw1::MakeWithdraw(Data* atmData)
{
	DataATM1* dt = (DataATM1*)atmData;// get access to the data
	dt->b = dt->b - dt->wd;// process withdrawal
	cout << "withdrawn" << endl;// ATM specific message
}