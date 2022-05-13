///////////////////////////////////////////////////////////
//  IncorLgn.h
//  Implementation of the Class IncorLgn - Abstract Strategy
//  Created on:      03-May-2009 12:01:44 AM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_CECEA2B7_6BCA_4e5c_8DA9_783BB3B9DB85__INCLUDED_)
#define EA_CECEA2B7_6BCA_4e5c_8DA9_783BB3B9DB85__INCLUDED_

#include "iostream"

using namespace std; 

class IncorLgn
{

public:
	IncorLgn();
	virtual ~IncorLgn();

	virtual void IncorrectLogin() = 0;// pure virtual

};
#endif // !defined(EA_CECEA2B7_6BCA_4e5c_8DA9_783BB3B9DB85__INCLUDED_)
