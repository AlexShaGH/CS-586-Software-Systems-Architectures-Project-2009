///////////////////////////////////////////////////////////
//  DspBal2.cpp
//  Implementation of the Class DspBal2 - Concrete Strategy
//  Created on:      03-May-2009 12:01:53 AM
//  Original author: Alex
///////////////////////////////////////////////////////////
#include "StdAfx.h"
#include "DspBal2.h"

DspBal2::DspBal2(){

}

DspBal2::~DspBal2(){

}

void DspBal2::DisplayBalance(Data* atmData){
	DataATM2* dt = (DataATM2*)atmData; // get access to data object
	// display it
	cout << "BALANCE: " << dt->b << endl;
}