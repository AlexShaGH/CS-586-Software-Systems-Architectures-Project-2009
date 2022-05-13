///////////////////////////////////////////////////////////
//  Idle.cpp
//  Implementation of the concrete State Class Idle
//  Created on:      02-May-2009 7:38:46 PM
//  Original author: Alex
///////////////////////////////////////////////////////////
#include "StdAfx.h"
#include "Idle.h"

Idle::Idle( EFSM_Data* efsmData, MDA_EFSM* mdaEfsm )
{// construct instance and initialize members with passed parameters
	this->data = efsmData; // platform independent data
	this->efsm = mdaEfsm; // MDA-EFSM
}
Idle::~Idle(){

}

void Idle::Card(){
	// issue OP action
	efsm->op->read_balance();
	efsm->ChangeState(2);// switch into CardInserted state
}