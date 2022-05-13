///////////////////////////////////////////////////////////
//  OPStrategiesFactory.h
//  Implementation of the Class OPStrategiesFactory - Abstract factory
//  Created on:      03-May-2009 12:02:09 AM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_A4A74C3E_72D8_4c34_BBD3_C9CFDF28477A__INCLUDED_)
#define EA_A4A74C3E_72D8_4c34_BBD3_C9CFDF28477A__INCLUDED_

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
#include "MkDeposit.h"
#include "DspMenu.h"


class OPStrategiesFactory
{

public:
	OPStrategiesFactory();
	virtual ~OPStrategiesFactory();

	// startegies creating methods
	virtual RdBal* CreateRdBal() = 0;
	virtual DspBal* CreateDspBal() = 0;
	virtual IncorLgn* CreateIncorLgn() = 0;
	virtual IncorPin* CreateIncorPin() = 0;
	virtual ManyAttm* CreateManyAttm() = 0;
	virtual DspMenu* CreateDspMenu() = 0;
	virtual MkDeposit* CreateMkDeposit() = 0;
	virtual MkWithdraw* CreateMkWithdraw() = 0;
	virtual BelowMinBal* CreateBelowMinBal() = 0;
	virtual EjectCard* CreateEjectCard() = 0;
	virtual Pnlt* CreatePnlt() = 0;
	virtual PrPin* CreatePrPin() = 0;

};
#endif // !defined(EA_A4A74C3E_72D8_4c34_BBD3_C9CFDF28477A__INCLUDED_)
