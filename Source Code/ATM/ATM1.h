///////////////////////////////////////////////////////////
//  ATM1.h
//  Implementation of the Class ATM1
//  Created on:      02-May-2009 7:38:32 PM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_8A6C2243_0014_4b81_8C7E_129FEA383C27__INCLUDED_)
#define EA_8A6C2243_0014_4b81_8C7E_129FEA383C27__INCLUDED_

#include "ATM.h"
#include "DataATM1.h"
#include "FactoryATM1.h"

class ATM1 : public ATM
{

public:
	ATM1();
	virtual ~ATM1();
	
	// ATM specific operation
	void card(int p, int y, int a);
	void login(int y);
	void pin(int p);
	void deposit(int d);
	void withdraw(int w);
	void balance();
	void exit();

private:
	DataATM1* dt; // ATM specific data

	// helper method - parses balance level (below or above min)
	// and issues corresponding event on Meta Model
	void balanceLevel();

};
#endif // !defined(EA_8A6C2243_0014_4b81_8C7E_129FEA383C27__INCLUDED_)
