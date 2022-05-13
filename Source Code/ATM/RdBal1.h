///////////////////////////////////////////////////////////
//  RdBal1.h
//  Implementation of the Class RdBal1 - Concrete Strategy
//  Created on:      03-May-2009 12:01:51 AM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_FDBC3A70_760D_492a_981A_4A3FB4E3493D__INCLUDED_)
#define EA_FDBC3A70_760D_492a_981A_4A3FB4E3493D__INCLUDED_

#include "RdBal.h"
#include "DataATM1.h"

class RdBal1 : public RdBal
{

public:
	RdBal1();
	virtual ~RdBal1();

	void ReadBalance(Data* atmData);// ATM specific 

};
#endif // !defined(EA_FDBC3A70_760D_492a_981A_4A3FB4E3493D__INCLUDED_)
