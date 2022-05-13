///////////////////////////////////////////////////////////
//  State.h
//  Implementation of the Class State (Abstract)
//  Created on:      02-May-2009 7:39:21 PM
///////////////////////////////////////////////////////////

#if !defined(EA_DF216D08_2999_4da3_B362_79E33EC676E2__INCLUDED_)
#define EA_DF216D08_2999_4da3_B362_79E33EC676E2__INCLUDED_

#include "EFSM-Data.h"

class MDA_EFSM;


/**
 * This class defines an interface for encapsulating the behavior associated with
 * a particular state of the Context.
 */
class State
{

public:
	State();
	virtual ~State();
	EFSM_Data* data; // platform independent data
	MDA_EFSM* efsm; // pointer to the met model object

	// Abstract operations
	virtual void Initialize();
	virtual void Card();
	virtual void CorrectLogin();
	virtual void IncorrectLogin();
	virtual void CorrectPin();
	virtual void IncorrectPin(int max);
	virtual void AboveMinBalance();
	virtual void BelowMinBalance();
	virtual void Deposit();
	virtual void Withdraw();
	virtual void Balance();
	virtual void Exit();
};
#endif // !defined(EA_DF216D08_2999_4da3_B362_79E33EC676E2__INCLUDED_)
