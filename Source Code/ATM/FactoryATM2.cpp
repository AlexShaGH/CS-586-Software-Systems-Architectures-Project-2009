///////////////////////////////////////////////////////////
//  FactoryATM2.cpp
//  Implementation of the Class FactoryATM2 - Concrete Factory 
//  Created on:      03-May-2009 12:02:11 AM
//  Original author: Alex
///////////////////////////////////////////////////////////

// All the methods return specific strategies objects

#include "StdAfx.h"
#include "FactoryATM2.h"

FactoryATM2::FactoryATM2(){

}

FactoryATM2::~FactoryATM2(){

}

RdBal* FactoryATM2::CreateRdBal(){
	return new RdBal2();
}

IncorLgn* FactoryATM2::CreateIncorLgn(){
	return new IncorLgn2();
}

IncorPin* FactoryATM2::CreateIncorPin(){
	return new IncorPin2();
}

ManyAttm* FactoryATM2::CreateManyAttm(){
	return new ManyAttm2();
}

DspMenu* FactoryATM2::CreateDspMenu(){
	return new DspMenu2();
}

MkDeposit* FactoryATM2::CreateMkDeposit(){
	return new MkDeposit2();
}

MkWithdraw* FactoryATM2::CreateMkWithdraw(){
	return new MkWithdraw2();
}

BelowMinBal* FactoryATM2::CreateBelowMinBal(){
	return new BelowMinBal2();
}

EjectCard* FactoryATM2::CreateEjectCard(){
	return new EjectCard2();
}

Pnlt* FactoryATM2::CreatePnlt(){
	return new Pnlt2();
}

PrPin* FactoryATM2::CreatePrPin(){
	return new PrPin2();
}

DspBal* FactoryATM2::CreateDspBal()
{
	return new DspBal2();
}