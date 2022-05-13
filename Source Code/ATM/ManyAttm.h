///////////////////////////////////////////////////////////
//  ManyAttm.h
//  Implementation of the Class ManyAttm - Abstract Strategy
//  Created on:      03-May-2009 12:01:46 AM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_0411BB80_9C8B_490b_8151_26ECA5D89743__INCLUDED_)
#define EA_0411BB80_9C8B_490b_8151_26ECA5D89743__INCLUDED_

#include "iostream"

using namespace std; 

class ManyAttm
{

public:
	ManyAttm();
	virtual ~ManyAttm();

	virtual void TooManyAttmMsg() = 0;// pure virtual

};
#endif // !defined(EA_0411BB80_9C8B_490b_8151_26ECA5D89743__INCLUDED_)
