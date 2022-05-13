///////////////////////////////////////////////////////////
//  MDA-EFSM.h
//  Implementation of the Class MDA-EFSM - core Meta Model
//  Created on:      02-May-2009 7:38:52 PM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_91A3854E_5005_4ec2_916F_13C58F5E7420__INCLUDED_)
#define EA_91A3854E_5005_4ec2_916F_13C58F5E7420__INCLUDED_

#include "OP.h"
#include "State.h"
#include "Start.h"
#include "Idle.h"
#include "CardInserted.h"
#include "CheckPin.h"
#include "S3.h"
#include "Ready.h"
#include "Overdrawn.h"

class MDA_EFSM
{

public:

	MDA_EFSM(OP* outputProcessor);
	virtual ~MDA_EFSM();
	State* state;		// current state pointer
	State* states[7];	// list of states
	OP* op;				// pointer to output processor

	// events
	void Initialize();
	void Card();
	void CorrectLogin();
	void IncorrectLogin();
	void CorrectPin();
	void IncorrectPin(int max);
	void AboveMinBalance();
	void BelowMinBalance();
	void Deposit();
	void Withdraw();
	void Balance();
	void Exit();

	// maintenance 
	void ChangeState(int stateID);

private:
	void InitializeStates(); //helper

};
#endif // !defined(EA_91A3854E_5005_4ec2_916F_13C58F5E7420__INCLUDED_)
