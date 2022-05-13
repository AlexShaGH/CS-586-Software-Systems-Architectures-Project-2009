///////////////////////////////////////////////////////////
//  MkWithdraw.h
//  Implementation of the Class MkWithdraw - Abstract Strategy
//  Created on:      03-May-2009 12:01:48 AM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_2BD1DF17_2AD2_4cd3_9902_23C6B27E78FB__INCLUDED_)
#define EA_2BD1DF17_2AD2_4cd3_9902_23C6B27E78FB__INCLUDED_

#include "iostream"
#include "Data.h"

using namespace std; 

class MkWithdraw
{

public:
	MkWithdraw();
	virtual ~MkWithdraw();

	virtual void MakeWithdraw(Data* atmData) = 0;// pure virtual

};
#endif // !defined(EA_2BD1DF17_2AD2_4cd3_9902_23C6B27E78FB__INCLUDED_)
