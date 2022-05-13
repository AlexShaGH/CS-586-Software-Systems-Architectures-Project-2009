///////////////////////////////////////////////////////////
//  RdBal2.cpp
//  Implementation of the Class RdBal2 - Concrete Strategy
//  Created on:      03-May-2009 12:01:53 AM
//  Original author: Alex
///////////////////////////////////////////////////////////
#include "StdAfx.h"
#include "RdBal2.h"

RdBal2::RdBal2(){

}

RdBal2::~RdBal2(){

}

// copies temporary stored balance into ATMS internal data
void RdBal2::ReadBalance(Data* atmData){
	DataATM2* dt = (DataATM2*)atmData;// get access to the data
	dt->b = dt->tempb; // copy
	// ATM specific message
	cout << "BALANCE HAS BEEN READ" << endl;
}