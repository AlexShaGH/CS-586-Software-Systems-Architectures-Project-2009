///////////////////////////////////////////////////////////
//  MkWithdraw2.cpp
//  Implementation of the Class MkWithdraw2 - Concrete Strategy
//  Created on:      03-May-2009 12:02:07 AM
//  Original author: Alex
///////////////////////////////////////////////////////////
#include "StdAfx.h"
#include "MkWithdraw2.h"

MkWithdraw2::MkWithdraw2(){

}

MkWithdraw2::~MkWithdraw2(){

}

void MkWithdraw2::MakeWithdraw(Data* atmData)
{
	DataATM2* dt = (DataATM2*)atmData;// get access to the data
	dt->b = dt->b - dt->wd;// process withdrawal
	cout << "WITHDRAWN" << endl;// ATM specific message
}