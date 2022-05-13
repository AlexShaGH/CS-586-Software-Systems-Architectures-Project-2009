///////////////////////////////////////////////////////////
//  RdBal2.h
//  Implementation of the Class RdBal2 - Concrete Strategy
//  Created on:      03-May-2009 12:01:52 AM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_2A410C2B_B9A9_4616_B8EE_D0B52D83C2DB__INCLUDED_)
#define EA_2A410C2B_B9A9_4616_B8EE_D0B52D83C2DB__INCLUDED_

#include "RdBal.h"
#include "DataATM2.h"

class RdBal2 : public RdBal
{

public:
	RdBal2();
	virtual ~RdBal2();

	void ReadBalance(Data* atmData);// ATM specific 

};
#endif // !defined(EA_2A410C2B_B9A9_4616_B8EE_D0B52D83C2DB__INCLUDED_)
