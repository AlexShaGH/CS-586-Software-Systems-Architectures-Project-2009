///////////////////////////////////////////////////////////
//  CheckPin.cpp
//  Implementation of the concrete State Class CheckPin
//  Created on:      02-May-2009 7:38:37 PM
//  Original author: Alex
///////////////////////////////////////////////////////////
#include "StdAfx.h"
#include "CheckPin.h"

CheckPin::CheckPin( EFSM_Data* efsmData, MDA_EFSM* mdaEfsm )
{// construct instance and initialize members with passed parameters
	this->data = efsmData;// platform independent data
	this->efsm = mdaEfsm;// MDA-EFSM
}
CheckPin::~CheckPin(){

}

void CheckPin::CorrectPin(){
	// issue OP action
	efsm->op->display_menu();
	data->withdrawn = false;// reset withdrawal indication flag
	efsm->ChangeState(4);// switch into S3 state
}

void CheckPin::IncorrectPin(int max){

	if (data->attempts == max)// to many attempts
	{// issue OP action
		efsm->op->incorrect_pin_msg();
		// issue OP action
		efsm->op->too_many_attempts_msg();
		efsm->ChangeState(2);// back into CardInserted state
	} 
	else
	{// issue OP action
		efsm->op->incorrect_pin_msg();
		data->attempts++;//increment attempts counter
	}
}

void CheckPin::Exit(){
// issue OP action
	efsm->op->eject_card();
	efsm->ChangeState(1);// back into Idle state
}