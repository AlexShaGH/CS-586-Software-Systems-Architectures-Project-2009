///////////////////////////////////////////////////////////
//  ATM2.h
//  Implementation of the Class ATM2
//  Created on:      02-May-2009 7:38:33 PM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_7D81C7A4_6706_43d9_8F75_8DA03105E30E__INCLUDED_)
#define EA_7D81C7A4_6706_43d9_8F75_8DA03105E30E__INCLUDED_

#include "ATM.h"
#include "DataATM2.h"
#include "FactoryATM2.h"

class ATM2 : public ATM
{

public:
	ATM2();
	virtual ~ATM2();
	
	// ATM specific operation
	void CARD(string p, string y, float a);
	void login(string y);
	void PIN(string x);
	void DEPOSIT(float d);
	void WITHDRAW(float w);
	void BALANCE();
	void exit();

private:
	DataATM2* dt;// ATM specific data

	// helper method - parses balance level (below or above min)
	// and issues corresponding event on Meta Model
	void balanceLevel();

};
#endif // !defined(EA_7D81C7A4_6706_43d9_8F75_8DA03105E30E__INCLUDED_)
