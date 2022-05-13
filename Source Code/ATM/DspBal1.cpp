///////////////////////////////////////////////////////////
//  DspBal1.cpp
//  Implementation of the Class DspBal1 - Concrete Strategy
//  Created on:      03-May-2009 12:01:52 AM
//  Original author: Alex
///////////////////////////////////////////////////////////
#include "StdAfx.h"
#include "DspBal1.h"

DspBal1::DspBal1(){

}

DspBal1::~DspBal1(){

}

void DspBal1::DisplayBalance(Data* atmData){
	DataATM1* dt = (DataATM1*)atmData; // get access to data object
	// display it
	cout << "balance: " << dt->b << endl;
}