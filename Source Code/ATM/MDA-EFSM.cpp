///////////////////////////////////////////////////////////
//  MDA-EFSM.cpp
//  Implementation of the Class MDA-EFSM - Core Class!!!
//  Created on:      02-May-2009 7:38:53 PM
//  Original author: Alex
///////////////////////////////////////////////////////////
#include "StdAfx.h"
#include "MDA-EFSM.h"

MDA_EFSM::MDA_EFSM(OP* outputProcessor){
	// initialize pointer to the output processor object
	op = outputProcessor;
	this->InitializeStates();// prepare concrete state objects
}

MDA_EFSM::~MDA_EFSM(){

}

void MDA_EFSM::Initialize(){
// delegate execution to currently active state
	state->Initialize();
}

void MDA_EFSM::Card(){
// delegate execution to currently active state
	state->Card();
}

void MDA_EFSM::CorrectLogin(){
// delegate execution to currently active state
	state->CorrectLogin();
}

void MDA_EFSM::IncorrectLogin(){
// delegate execution to currently active state
	state->IncorrectLogin();
}

void MDA_EFSM::CorrectPin(){
// delegate execution to currently active state
	state->CorrectPin();
}

void MDA_EFSM::IncorrectPin(int max){
// delegate execution to currently active state
	state->IncorrectPin(max);
}

void MDA_EFSM::AboveMinBalance(){
// delegate execution to currently active state
	state->AboveMinBalance();
}

void MDA_EFSM::BelowMinBalance(){
// delegate execution to currently active state
	state->BelowMinBalance();
}

void MDA_EFSM::Deposit(){
// delegate execution to currently active state
	state->Deposit();
}

void MDA_EFSM::Withdraw(){
// delegate execution to currently active state
	state->Withdraw();
}

void MDA_EFSM::Balance(){
// delegate execution to currently active state
	state->Balance();
}

void MDA_EFSM::Exit(){
// delegate execution to currently active state
	state->Exit();
}

// changes current state according to the received index
void MDA_EFSM::ChangeState(int stateID){

	state = states[stateID];
}

// Initializer for the concrete State objects
void MDA_EFSM::InitializeStates()
{
	// instantiate internal data object
	EFSM_Data* efsmData = new EFSM_Data();

	// initialize all the states
	states[0] = new Start(efsmData,this);
	states[1] = new Idle(efsmData,this);
	states[2] = new CardInserted(efsmData,this);
	states[3] = new CheckPin(efsmData,this);
	states[4] = new S3(efsmData,this);
	states[5] = new Ready(efsmData,this);
	states[6] = new Overdrawn(efsmData,this);

	state = states[0];// set current state to Start
	this->Initialize();// force to move to Idle state
}