///////////////////////////////////////////////////////////
//  S3.h
//  Implementation of the concrete State Class S3
//  Created on:      02-May-2009 7:39:19 PM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_504869DA_DD03_4351_BEFB_04C3734906E7__INCLUDED_)
#define EA_504869DA_DD03_4351_BEFB_04C3734906E7__INCLUDED_

#include "State.h"
#include "MDA-EFSM.h"

class S3 : public State
{

public:
	S3(EFSM_Data* efsmData, MDA_EFSM* mdaEfsm);
	virtual ~S3();

	// state specific operations
	void AboveMinBalance();
	void BelowMinBalance();

};
#endif // !defined(EA_504869DA_DD03_4351_BEFB_04C3734906E7__INCLUDED_)
