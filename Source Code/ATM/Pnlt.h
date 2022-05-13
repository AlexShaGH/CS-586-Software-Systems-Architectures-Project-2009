///////////////////////////////////////////////////////////
//  Pnlt.h
//  Implementation of the Class Pnlt - Abstract Strategy
//  Created on:      03-May-2009 12:01:49 AM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_78FA5F1D_C2E5_42f3_B6D2_F0B497367CE6__INCLUDED_)
#define EA_78FA5F1D_C2E5_42f3_B6D2_F0B497367CE6__INCLUDED_

#include "iostream"
#include "Data.h"

using namespace std; 

class Pnlt
{

public:
	Pnlt();
	virtual ~Pnlt();

	virtual void Penalty(Data* atmData) = 0;// pure virtual

};
#endif // !defined(EA_78FA5F1D_C2E5_42f3_B6D2_F0B497367CE6__INCLUDED_)
