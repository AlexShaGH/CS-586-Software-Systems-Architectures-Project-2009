///////////////////////////////////////////////////////////
//  ATM1.cpp
//  Implementation of the Class ATM1
//  Created on:      02-May-2009 7:38:33 PM
//  Original author: Alex
///////////////////////////////////////////////////////////
#include "StdAfx.h"
#include "ATM1.h"


ATM1::ATM1(){
	dt = new DataATM1(); //platform dependent data
	FactoryATM1* factory = new FactoryATM1();// concrete factory
	OP* op = new OP(factory, dt);// construct output processor
	m = new MDA_EFSM(op);// finally create MDA-EFSM object
}

ATM1::~ATM1(){

}

void ATM1::card(int p, int y, int a){
	// store card parameters
	dt->tempb = a;
	dt->pn = p;
	dt->id = y;
	m->Card();// issue MDA-EFSM event
}


void ATM1::login(int y){

	if (y == dt->id)
	{// issue MDA-EFSM event
		m->CorrectLogin();
	} 
	else
	{// issue MDA-EFSM event
		m->IncorrectLogin();
	}
}

void ATM1::pin(int p){

	if (p == dt->pn) //if pin is correct
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


void ATM1::deposit(int d){
	// store the amount
	dt->dp = d;
	m->Deposit();// issue MDA-EFSM event
	// where we are? Below or above min?
	this->balanceLevel();
}

void ATM1::withdraw(int w){
	// store the amount
	dt->wd = w;
	m->Withdraw();// issue MDA-EFSM event
	// where we are? Below or above min?
	this->balanceLevel();
}


void ATM1::balance(){
// issue MDA-EFSM event
	m->Balance();
}


void ATM1::exit(){
// issue MDA-EFSM event
	m->Exit();
}

// this helper is for identifying 
// current balance level relatively 
// to minimum balance
void ATM1::balanceLevel(){

	if (dt->b < dt->minbal) //where we are?
	{// issue MDA-EFSM event
		m->BelowMinBalance();
	} 
	else
	{// issue MDA-EFSM event
		m->AboveMinBalance();
	}
}