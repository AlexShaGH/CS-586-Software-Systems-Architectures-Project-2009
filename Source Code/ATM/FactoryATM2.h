///////////////////////////////////////////////////////////
//  FactoryATM2.h
//  Implementation of the Class FactoryATM2 - concrete factory
//  Created on:      03-May-2009 12:02:11 AM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_F67ED7CB_8681_42e8_A832_846F69E98E24__INCLUDED_)
#define EA_F67ED7CB_8681_42e8_A832_846F69E98E24__INCLUDED_

#include "OPStrategiesFactory.h"
#include "RdBal2.h"
#include "DspBal2.h"
#include "PrPin2.h"
#include "IncorLgn2.h"
#include "IncorPin2.h"
#include "ManyAttm2.h"
#include "EjectCard2.h"
#include "BelowMinBal2.h"
#include "Pnlt2.h"
#include "MkWithdraw2.h"
#include "MkDeposit2.h"
#include "DspMenu2.h"

class FactoryATM2 : public OPStrategiesFactory
{

public:
	FactoryATM2();
	virtual ~FactoryATM2();

	// creational methods
	RdBal* CreateRdBal();
	DspBal* CreateDspBal();
	IncorLgn* CreateIncorLgn();
	IncorPin* CreateIncorPin();
	ManyAttm* CreateManyAttm();
	DspMenu* CreateDspMenu();
	MkDeposit* CreateMkDeposit();
	MkWithdraw* CreateMkWithdraw();
	BelowMinBal* CreateBelowMinBal();
	EjectCard* CreateEjectCard();
	Pnlt* CreatePnlt();
	PrPin* CreatePrPin();

};
#endif // !defined(EA_F67ED7CB_8681_42e8_A832_846F69E98E24__INCLUDED_)
