///////////////////////////////////////////////////////////
//  Pnlt1.cpp
//  Implementation of the Class Pnlt1 - Concrete Strategy
//  Created on:      03-May-2009 12:02:05 AM
//  Original author: Alex
///////////////////////////////////////////////////////////
#include "StdAfx.h"
#include "Pnlt1.h"

Pnlt1::Pnlt1(){

}

Pnlt1::~Pnlt1(){

}

void Pnlt1::Penalty(Data* atmData)
{// get access to the data
	DataATM1* dt = (DataATM1*)atmData;
	dt->b = dt->b - dt->penalty; // process penalty
	cout << "penalty applied" << endl;// ATM specific message
}