///////////////////////////////////////////////////////////
//  OP.cpp
//  Implementation of the Class OP - Output Processor
//  Created on:      02-May-2009 7:39:03 PM
//  Original author: Alex
///////////////////////////////////////////////////////////
#include "StdAfx.h"
#include "OP.h"

OP::OP(OPStrategiesFactory* f, Data* atmData){
	factory = f;
	dt = atmData;
	this->InitializeStrategies();	
}

OP::~OP(){

}

void OP::read_balance(){
// delegate execution to the strategy object
	rdBal->ReadBalance(dt);
}

void OP::display_balance(){
// delegate execution to the strategy object
	dspBal->DisplayBalance(dt);
}

void OP::prompt_for_PIN(){
// delegate execution to the strategy object
	prPin->PromptPin();
}

void OP::incorrect_login_msg(){
// delegate execution to the strategy object
	incLgn->IncorrectLogin();
}

void OP::incorrect_pin_msg(){
// delegate execution to the strategy object
	incPin->IncorrectPin();
}

void OP::too_many_attempts_msg(){
// delegate execution to the strategy object
	manyAttmpt->TooManyAttmMsg();
}

void OP::display_menu(){
// delegate execution to the strategy object
	dspMnu->DisplayMenu();
}

void OP::make_deposit(){
// delegate execution to the strategy object
	mkDep->MakeDeposit(dt);
}

void OP::make_withdraw(){
// delegate execution to the strategy object
	mkWithdr->MakeWithdraw(dt);
}

void OP::penalty(){
// delegate execution to the strategy object
	pnlt->Penalty(dt);
}

void OP::below_min_balance_msg(){
// delegate execution to the strategy object
	belowMinB->BelowMinBMsg();
}

void OP::eject_card(){
// delegate execution to the strategy object
	ejectCrd->EjectCardOp();
}

// Strategies initializer
void OP::InitializeStrategies(){

	// create strategy onjects
	rdBal = factory->CreateRdBal();
	dspBal = factory->CreateDspBal();
	prPin = factory->CreatePrPin();
	incLgn = factory->CreateIncorLgn();
	incPin = factory->CreateIncorPin();
	manyAttmpt = factory->CreateManyAttm();
	dspMnu = factory->CreateDspMenu();
	mkDep = factory->CreateMkDeposit();
	mkWithdr = factory->CreateMkWithdraw();
	pnlt = factory->CreatePnlt();
	belowMinB = factory->CreateBelowMinBal();
	ejectCrd = factory->CreateEjectCard();
}