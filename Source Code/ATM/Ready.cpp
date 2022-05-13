///////////////////////////////////////////////////////////
//  Ready.cpp
//  Implementation of the concrete State Class Ready
//  Created on:      02-May-2009 7:39:19 PM
//  Original author: Alex
///////////////////////////////////////////////////////////
#include "StdAfx.h"
#include "Ready.h"

Ready::Ready( EFSM_Data* efsmData, MDA_EFSM* mdaEfsm )
{// construct instance and initialize members with passed parameters
	this->data = efsmData;// platform independent data
	this->efsm = mdaEfsm;// MDA-EFSM
}
Ready::~Ready(){

}

void Ready::Deposit(){
	// issue OP action
	efsm->op->make_deposit();
}

void Ready::Withdraw(){
	// issue OP action
	efsm->op->make_withdraw();
	data->withdrawn = true; // set the flag indication withdrawal
	efsm->ChangeState(4);// switch into S3 state
}

void Ready::Balance(){
	// issue OP action
	efsm->op->display_balance();
}

void Ready::Exit(){
	// issue OP action
	efsm->op->eject_card();
	efsm->ChangeState(1);// switch into Idle state
}