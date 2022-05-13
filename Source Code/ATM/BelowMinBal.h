///////////////////////////////////////////////////////////
//  BelowMinBal.h
//  Implementation of the Class BelowMinBal - Abstract Strategy
//  Created on:      03-May-2009 12:01:50 AM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_FECA78AE_083A_4afd_88F0_87C7AF3629DF__INCLUDED_)
#define EA_FECA78AE_083A_4afd_88F0_87C7AF3629DF__INCLUDED_

#include "iostream"

using namespace std; 

class BelowMinBal
{

public:
	BelowMinBal();
	virtual ~BelowMinBal();

	virtual void BelowMinBMsg() = 0;// pure virtual

};
#endif // !defined(EA_FECA78AE_083A_4afd_88F0_87C7AF3629DF__INCLUDED_)
