///////////////////////////////////////////////////////////
//  CheckPin.h
//  Implementation of the concrete State Class CheckPin
//  Created on:      02-May-2009 7:38:36 PM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_2C4EFBBD_A33A_4386_A413_52F8AFCBF0AD__INCLUDED_)
#define EA_2C4EFBBD_A33A_4386_A413_52F8AFCBF0AD__INCLUDED_

#include "State.h"
#include "MDA-EFSM.h"

class CheckPin : public State
{

public:
	CheckPin(EFSM_Data* efsmData, MDA_EFSM* mdaEfsm);
	virtual ~CheckPin();

	// state specific operations
	void CorrectPin();
	void IncorrectPin(int max);
	void Exit();

};
#endif // !defined(EA_2C4EFBBD_A33A_4386_A413_52F8AFCBF0AD__INCLUDED_)
