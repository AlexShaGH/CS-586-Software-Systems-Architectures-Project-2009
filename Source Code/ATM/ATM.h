///////////////////////////////////////////////////////////
//  ATM.h
//  Implementation of the Class ATM
//  Created on:      02-May-2009 7:38:31 PM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_1E05D736_2DB0_4ccf_AC68_FE26CCF7F6C4__INCLUDED_)
#define EA_1E05D736_2DB0_4ccf_AC68_FE26CCF7F6C4__INCLUDED_

#include "MDA-EFSM.h"
#include "Data.h"

class ATM
{

public:
	ATM();
	virtual ~ATM();

protected:
	MDA_EFSM* m; // pointer to Meta Model
};

#endif // !defined(EA_1E05D736_2DB0_4ccf_AC68_FE26CCF7F6C4__INCLUDED_)
