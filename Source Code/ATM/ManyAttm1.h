///////////////////////////////////////////////////////////
//  ManyAttm1.h
//  Implementation of the Class ManyAttm1 - Concrete Strategy
//  Created on:      03-May-2009 12:01:59 AM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_AAB480D0_B920_4f6f_81B7_89AA73F69F4F__INCLUDED_)
#define EA_AAB480D0_B920_4f6f_81B7_89AA73F69F4F__INCLUDED_

#include "ManyAttm.h"

class ManyAttm1 : public ManyAttm
{

public:
	ManyAttm1();
	virtual ~ManyAttm1();

	void TooManyAttmMsg();// ATM specific 

};
#endif // !defined(EA_AAB480D0_B920_4f6f_81B7_89AA73F69F4F__INCLUDED_)
