///////////////////////////////////////////////////////////
//  FactoryATM1.h
//  Implementation of the Class FactoryATM1 - concrete factory 
//  Created on:      03-May-2009 12:02:10 AM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_388D9835_9B21_4ad0_8BDC_337879DBA048__INCLUDED_)
#define EA_388D9835_9B21_4ad0_8BDC_337879DBA048__INCLUDED_

#include "OPStrategiesFactory.h"
#include "RdBal1.h"
#include "DspBal1.h"
#include "PrPin1.h"
#include "IncorLgn1.h"
#include "IncorPin1.h"
#include "ManyAttm1.h"
#include "EjectCard1.h"
#include "BelowMinBal1.h"
#include "Pnlt1.h"
#include "MkWithdraw1.h"
#include "MkDeposit1.h"
#include "DspMenu1.h"

class FactoryATM1 : public OPStrategiesFactory
{

public:
	FactoryATM1();
	virtual ~FactoryATM1();

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
#endif // !defined(EA_388D9835_9B21_4ad0_8BDC_337879DBA048__INCLUDED_)
