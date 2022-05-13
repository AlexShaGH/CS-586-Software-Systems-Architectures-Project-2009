///////////////////////////////////////////////////////////
//  IncorLgn2.h
//  Implementation of the Class IncorLgn2 - Concrete Strategy
//  Created on:      03-May-2009 12:01:55 AM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_39539EEB_FECB_4a93_9930_0D6542AD776F__INCLUDED_)
#define EA_39539EEB_FECB_4a93_9930_0D6542AD776F__INCLUDED_

#include "IncorLgn.h"

class IncorLgn2 : public IncorLgn
{

public:
	IncorLgn2();
	virtual ~IncorLgn2();

	void IncorrectLogin();// ATM specific 

};
#endif // !defined(EA_39539EEB_FECB_4a93_9930_0D6542AD776F__INCLUDED_)
