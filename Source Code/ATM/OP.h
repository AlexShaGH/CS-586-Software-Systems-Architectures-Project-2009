///////////////////////////////////////////////////////////
//  OP.h
//  Implementation of the Class OP - output processor
//  Created on:      02-May-2009 7:38:58 PM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_C819192E_B5B2_43af_9AE5_8EB1CB5EA76D__INCLUDED_)
#define EA_C819192E_B5B2_43af_9AE5_8EB1CB5EA76D__INCLUDED_

#include "RdBal.h"
#include "DspBal.h"
#include "PrPin.h"
#include "IncorLgn.h"
#include "IncorPin.h"
#include "ManyAttm.h"
#include "EjectCard.h"
#include "BelowMinBal.h"
#include "Pnlt.h"
#include "MkWithdraw.h"
#include "DspMenu.h"
#include "MkDeposit.h"
#include "OPStrategiesFactory.h"
#include "Data.h"

class MDA_EFSM;

class OP
{
public:

	OP(OPStrategiesFactory* f, Data* atmData);
	virtual ~OP();

	// actions
	void read_balance();
	void display_balance();
	void prompt_for_PIN();
	void incorrect_login_msg();
	void incorrect_pin_msg();
	void too_many_attempts_msg();
	void display_menu();
	void make_deposit();
	void make_withdraw();
	void penalty();
	void below_min_balance_msg();
	void eject_card();

private:
	OPStrategiesFactory *factory; // pointer to specific factory
	Data* dt;	//	ATM specific data

	// strategies to delegate actions to
	RdBal* rdBal;
	DspBal* dspBal;
	PrPin* prPin;
	IncorLgn* incLgn;
	IncorPin* incPin;
	ManyAttm* manyAttmpt;
	DspMenu* dspMnu;
	MkDeposit* mkDep;
	MkWithdraw* mkWithdr;
	Pnlt* pnlt;
	BelowMinBal* belowMinB;
	EjectCard* ejectCrd;

	void InitializeStrategies();//helper

};

#endif // !defined(EA_C819192E_B5B2_43af_9AE5_8EB1CB5EA76D__INCLUDED_)
