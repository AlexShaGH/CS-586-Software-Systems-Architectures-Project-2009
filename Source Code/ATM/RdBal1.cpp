///////////////////////////////////////////////////////////
//  RdBal1.cpp
//  Implementation of the Class RdBal1 - Concrete Strategy
//  Created on:      03-May-2009 12:01:52 AM
//  Original author: Alex
///////////////////////////////////////////////////////////
#include "StdAfx.h"
#include "RdBal1.h"

RdBal1::RdBal1(){

}

RdBal1::~RdBal1(){

}

// copies temporary stored balance into ATMS internal data
void RdBal1::ReadBalance(Data* atmData){
	DataATM1* dt = (DataATM1*)atmData;// get access to the data
	dt->b = dt->tempb; // copy
	// ATM specific message
	cout << "balance has been read" << endl;
}