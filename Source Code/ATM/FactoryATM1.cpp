///////////////////////////////////////////////////////////
//  FactoryATM1.cpp
//  Implementation of the Class FactoryATM1 - Concrete Factory 
//  Created on:      03-May-2009 12:02:10 AM
//  Original author: Alex
///////////////////////////////////////////////////////////

// All the methods return specific strategies objects

#include "StdAfx.h"
#include "FactoryATM1.h"

FactoryATM1::FactoryATM1(){

}

FactoryATM1::~FactoryATM1(){

}

RdBal* FactoryATM1::CreateRdBal()
{
	return new RdBal1();
}

IncorLgn* FactoryATM1::CreateIncorLgn()
{
	return new IncorLgn1();
}

IncorPin* FactoryATM1::CreateIncorPin()
{
	return new IncorPin1();
}

ManyAttm* FactoryATM1::CreateManyAttm()
{
	return new ManyAttm1();
}

DspMenu* FactoryATM1::CreateDspMenu()
{
	return new DspMenu1();
}

MkDeposit* FactoryATM1::CreateMkDeposit()
{
	return new MkDeposit1();
}

MkWithdraw* FactoryATM1::CreateMkWithdraw()
{
	return new MkWithdraw1();
}

BelowMinBal* FactoryATM1::CreateBelowMinBal()
{
	return new BelowMinBal1();
}

EjectCard* FactoryATM1::CreateEjectCard()
{
	return new EjectCard1();
}

Pnlt* FactoryATM1::CreatePnlt()
{
	return new Pnlt1();
}

PrPin* FactoryATM1::CreatePrPin()
{
	return new PrPin1();
}

DspBal* FactoryATM1::CreateDspBal()
{
	return new DspBal1();
}