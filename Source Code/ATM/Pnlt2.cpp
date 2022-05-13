///////////////////////////////////////////////////////////
//  Pnlt2.cpp
//  Implementation of the Class Pnlt2 - Concrete Strategy
//  Created on:      03-May-2009 12:02:05 AM
//  Original author: Alex
///////////////////////////////////////////////////////////
#include "StdAfx.h"
#include "Pnlt2.h"

Pnlt2::Pnlt2(){

}

Pnlt2::~Pnlt2(){

}

void Pnlt2::Penalty(Data* atmData)
{// get access to the data
	DataATM2* dt = (DataATM2*)atmData;
	dt->b = dt->b - dt->penalty; // process penalty
	cout << "PENALTY APPLIED" << endl;// ATM specific message
}