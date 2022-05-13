///////////////////////////////////////////////////////////
//  Idle.h
//  Implementation of the concrete State Class Idle
//  Created on:      02-May-2009 7:38:46 PM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_D68401E8_B2AE_4b90_9187_F5B5519EEC3F__INCLUDED_)
#define EA_D68401E8_B2AE_4b90_9187_F5B5519EEC3F__INCLUDED_

#include "State.h"
#include "MDA-EFSM.h"

class Idle : public State
{

public:
	Idle(EFSM_Data* efsmData, MDA_EFSM* mdaEfsm);
	virtual ~Idle();

	// state specific operations
	void Card();

};
#endif // !defined(EA_D68401E8_B2AE_4b90_9187_F5B5519EEC3F__INCLUDED_)
