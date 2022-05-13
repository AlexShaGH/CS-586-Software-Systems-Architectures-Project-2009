///////////////////////////////////////////////////////////
//  EjectCard.h
//  Implementation of the Class EjectCard - Abstract Strategy
//  Created on:      03-May-2009 12:01:51 AM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_D78A2E33_E3F5_4ed4_8952_4C7E02978E65__INCLUDED_)
#define EA_D78A2E33_E3F5_4ed4_8952_4C7E02978E65__INCLUDED_

#include "iostream"

using namespace std; 

class EjectCard
{

public:
	EjectCard();
	virtual ~EjectCard();

	virtual void EjectCardOp() = 0;// pure virtual

};
#endif // !defined(EA_D78A2E33_E3F5_4ed4_8952_4C7E02978E65__INCLUDED_)
