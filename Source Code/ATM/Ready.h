///////////////////////////////////////////////////////////
//  Ready.h
//  Implementation of the concrete State Class Ready
//  Created on:      02-May-2009 7:39:19 PM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_B884DA01_38A5_43ba_BDA0_8272B472C46D__INCLUDED_)
#define EA_B884DA01_38A5_43ba_BDA0_8272B472C46D__INCLUDED_

#include "State.h"
#include "MDA-EFSM.h"

class Ready : public State
{

public:
	Ready(EFSM_Data* efsmData, MDA_EFSM* mdaEfsm);
	virtual ~Ready();

	// state specific operations
	void Deposit();
	void Withdraw();
	void Balance();
	void Exit();

};
#endif // !defined(EA_B884DA01_38A5_43ba_BDA0_8272B472C46D__INCLUDED_)
