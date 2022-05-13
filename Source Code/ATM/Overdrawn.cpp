///////////////////////////////////////////////////////////
//  Overdrawn.cpp
//  Implementation of the concrete State Class Overdrawn
//  Created on:      02-May-2009 7:39:06 PM
//  Original author: Alex
///////////////////////////////////////////////////////////
#include "StdAfx.h"
#include "Overdrawn.h"

Overdrawn::Overdrawn( EFSM_Data* efsmData, MDA_EFSM* mdaEfsm )
{// construct instance and initialize members with passed parameters
	this->data = efsmData;// platform independent data
	this->efsm = mdaEfsm;// MDA-EFSM
}
Overdrawn::~Overdrawn(){

}

void Overdrawn::Deposit(){
	// issue OP action
	efsm->op->make_deposit();
	efsm->ChangeState(4); // switch into S3 state
}

void Overdrawn::Withdraw(){
	// issue OP action
	efsm->op->below_min_balance_msg();
}

void Overdrawn::Balance(){
	// issue OP action
	efsm->op->display_balance();
}

void Overdrawn::Exit(){
	// issue OP action
	efsm->op->eject_card();
	efsm->ChangeState(1);// switch into Idle state
}