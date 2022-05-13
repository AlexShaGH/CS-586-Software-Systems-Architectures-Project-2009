///////////////////////////////////////////////////////////
//  Start.h
//  Implementation of the concrete State Class Start
//  Created on:      02-May-2009 7:39:20 PM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_299582AD_70E0_4990_98EF_ECB910AF6424__INCLUDED_)
#define EA_299582AD_70E0_4990_98EF_ECB910AF6424__INCLUDED_

#include "State.h"
#include "MDA-EFSM.h"

class Start : public State
{

public:
	Start(EFSM_Data* efsmData, MDA_EFSM* mdaEfsm);
	virtual ~Start();

	// state specific operations
	void Initialize();

};
#endif // !defined(EA_299582AD_70E0_4990_98EF_ECB910AF6424__INCLUDED_)
