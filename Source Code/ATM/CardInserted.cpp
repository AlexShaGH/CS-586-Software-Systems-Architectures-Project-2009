///////////////////////////////////////////////////////////
//  CardInserted.cpp
//  Implementation of the concrete State Class CardInserted
//  Created on:      02-May-2009 7:38:36 PM
//  Original author: Alex
///////////////////////////////////////////////////////////
#include "StdAfx.h"
#include "CardInserted.h"

CardInserted::CardInserted( EFSM_Data* efsmData, MDA_EFSM* mdaEfsm )
{// construct instance and initialize members with passed parameters
	this->data = efsmData;// platform independent data
	this->efsm = mdaEfsm;// MDA-EFSM
}
CardInserted::~CardInserted(){

}

void CardInserted::CorrectLogin(){

	data->attempts = 0;//reset pin attempts counter
	efsm->op->prompt_for_PIN();// issue OP action
	efsm->ChangeState(3); // switch into CheckPin state
}

void CardInserted::IncorrectLogin(){
	// issue OP action
	efsm->op->incorrect_login_msg();
}

void CardInserted::Exit(){
	// issue OP action
	efsm->op->eject_card();
	efsm->ChangeState(1);// switch into Idle state
}