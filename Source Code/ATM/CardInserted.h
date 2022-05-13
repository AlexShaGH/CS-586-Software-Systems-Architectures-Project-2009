///////////////////////////////////////////////////////////
//  CardInserted.h
//  Implementation of the concrete State CardInserted
//  Created on:      02-May-2009 7:38:36 PM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_D21DECA5_AE2E_4ff0_A2D2_EFB1EBCED64E__INCLUDED_)
#define EA_D21DECA5_AE2E_4ff0_A2D2_EFB1EBCED64E__INCLUDED_

#include "State.h"
#include "MDA-EFSM.h"

class CardInserted : public State
{

public:
	CardInserted(EFSM_Data* efsmData, MDA_EFSM* mdaEfsm);
	virtual ~CardInserted();

	// state specific operations
	void CorrectLogin();
	void IncorrectLogin();
	void Exit();

};
#endif // !defined(EA_D21DECA5_AE2E_4ff0_A2D2_EFB1EBCED64E__INCLUDED_)
