///////////////////////////////////////////////////////////
//  ManyAttm2.h
//  Implementation of the Class ManyAttm2 - Concrete Strategy
//  Created on:      03-May-2009 12:02:00 AM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_DF93CDAC_90C8_4944_BD07_9F3221350C4A__INCLUDED_)
#define EA_DF93CDAC_90C8_4944_BD07_9F3221350C4A__INCLUDED_

#include "ManyAttm.h"

class ManyAttm2 : public ManyAttm
{

public:
	ManyAttm2();
	virtual ~ManyAttm2();

	void TooManyAttmMsg();// ATM specific 

};
#endif // !defined(EA_DF93CDAC_90C8_4944_BD07_9F3221350C4A__INCLUDED_)
