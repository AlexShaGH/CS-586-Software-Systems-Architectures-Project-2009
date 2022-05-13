///////////////////////////////////////////////////////////
//  ATM2.cpp
//  Implementation of the Class ATM2
//  Created on:      02-May-2009 7:38:33 PM
//  Original author: Alex
///////////////////////////////////////////////////////////
#include "StdAfx.h"
#include "ATM2.h"


ATM2::ATM2(){
	dt = new DataATM2();//platform dependent data
	FactoryATM2* factory = new FactoryATM2();// concrete factory
	OP* op = new OP(factory, dt);// construct output processor
	m = new MDA_EFSM(op);// finally create MDA-EFSM object
}

ATM2::~ATM2(){

}

void ATM2::CARD(string p, string y, float a){
	// store card parameters
	dt->tempb = a;
	dt->pn = p;
	dt->id = y;
	m->Card();// issue MDA-EFSM event
}


void ATM2::login(string y){

	if (y == dt->id)
	{// issue MDA-EFSM event
		m->CorrectLogin();
	} 
	else
	{// issue MDA-EFSM event
		m->IncorrectLogin();
	}
}


void ATM2::PIN(string x){

	if (x == dt->pn)//if pin is correct
	{// issue MDA-EFSM event
		m->CorrectPin();
		// where we are? Below or above min?
		this->balanceLevel();
	} 
	else
	{// issue MDA-EFSM event
		m->IncorrectPin(dt->maxatt);
	}
}


void ATM2::DEPOSIT(float d){
	// store the amount
	dt->dp = d;
	m->Deposit();// issue MDA-EFSM event
	// where we are? Below or above min?
	this->balanceLevel();
}


void ATM2::WITHDRAW(float w){
	// store the amount
	dt->wd = w;
	m->Withdraw();// issue MDA-EFSM event
	// where we are? Below or above min?
	this->balanceLevel();
}


void ATM2::BALANCE(){
// issue MDA-EFSM event
	m->Balance();
}


void ATM2::exit(){
// issue MDA-EFSM event
	m->Exit();
}

// this helper is for identifying 
// current balance level relatively 
// to minimum balance
void ATM2::balanceLevel(){

	if (dt->b < dt->minbal)//where we are?
	{// issue MDA-EFSM event
		m->BelowMinBalance();
	} 
	else
	{// issue MDA-EFSM event
		m->AboveMinBalance();
	}
}