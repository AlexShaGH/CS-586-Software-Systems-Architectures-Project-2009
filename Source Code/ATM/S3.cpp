///////////////////////////////////////////////////////////
//  S3.cpp
//  Implementation of the concrete State Class S3
//  Created on:      02-May-2009 7:39:20 PM
//  Original author: Alex
///////////////////////////////////////////////////////////
#include "StdAfx.h"
#include "S3.h"

S3::S3( EFSM_Data* efsmData, MDA_EFSM* mdaEfsm )
{// construct instance and initialize members with passed parameters
	this->data = efsmData;// platform independent data
	this->efsm = mdaEfsm;// MDA-EFSM
}

S3::~S3(){

}

void S3::AboveMinBalance(){
	// issue OP action
	efsm->ChangeState(5);//switch into Ready state
}

void S3::BelowMinBalance(){

	if (data->withdrawn == true)// did we get here after withdrawal?
	{	// issue OP action
		efsm->op->penalty();
		data->withdrawn = false;// reset withdrawal flag
	}
	efsm->ChangeState(6);//switch into Overdrawn state
}