///////////////////////////////////////////////////////////
//  Start.cpp
//  Implementation of the concrete State Class Start
//  Created on:      02-May-2009 7:39:20 PM
//  Original author: Alex
///////////////////////////////////////////////////////////
#include "StdAfx.h"
#include "Start.h"

Start::Start( EFSM_Data* efsmData, MDA_EFSM* mdaEfsm )
{// construct instance and initialize members with passed parameters
	this->data = efsmData;// platform independent data
	this->efsm = mdaEfsm;// MDA-EFSM
}

Start::~Start(){

}

void Start::Initialize(){
// move to Idle state
	efsm->ChangeState(1);
}