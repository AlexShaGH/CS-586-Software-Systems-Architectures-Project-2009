///////////////////////////////////////////////////////////
//  Overdrawn.h
//  Implementation of the concrete State Class Overdrawn
//  Created on:      02-May-2009 7:39:05 PM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_B4E4F3C6_AA63_4695_83DD_F8318BF009BE__INCLUDED_)
#define EA_B4E4F3C6_AA63_4695_83DD_F8318BF009BE__INCLUDED_

#include "State.h"
#include "MDA-EFSM.h"

class Overdrawn : public State
{

public:
	Overdrawn(EFSM_Data* efsmData, MDA_EFSM* mdaEfsm);
	virtual ~Overdrawn();

	// state specific operations
	void Deposit();
	void Withdraw();
	void Balance();
	void Exit();

};
#endif // !defined(EA_B4E4F3C6_AA63_4695_83DD_F8318BF009BE__INCLUDED_)
