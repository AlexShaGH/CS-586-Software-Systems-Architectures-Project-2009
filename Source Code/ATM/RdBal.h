///////////////////////////////////////////////////////////
//  RdBal.h
//  Implementation of the Class RdBal - Abstract Strategy
//  Created on:      03-May-2009 12:01:43 AM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_FF808CE9_F483_4a70_A5AA_3F8A7DCCBAB2__INCLUDED_)
#define EA_FF808CE9_F483_4a70_A5AA_3F8A7DCCBAB2__INCLUDED_

#include "iostream"
#include "Data.h"

using namespace std; 

class RdBal
{

public:
	RdBal();
	virtual ~RdBal();

	virtual void ReadBalance(Data* atmData) = 0;// pure virtual

};
#endif // !defined(EA_FF808CE9_F483_4a70_A5AA_3F8A7DCCBAB2__INCLUDED_)
