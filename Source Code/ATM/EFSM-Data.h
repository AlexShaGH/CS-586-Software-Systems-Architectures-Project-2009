///////////////////////////////////////////////////////////
//  EFSM-Data.h
//  Implementation of the Class EFSM-Data - platform independent data
//  Created on:      02-May-2009 7:38:41 PM
//  Original author: Alex
///////////////////////////////////////////////////////////

#if !defined(EA_3F4B229E_D2B6_4175_90D6_E7310A5C8BAD__INCLUDED_)
#define EA_3F4B229E_D2B6_4175_90D6_E7310A5C8BAD__INCLUDED_

class EFSM_Data
{

public:
	EFSM_Data();
	virtual ~EFSM_Data();
	int attempts;	// pin attempts counter
	bool withdrawn;	// withdrawal indication flag

};
#endif // !defined(EA_3F4B229E_D2B6_4175_90D6_E7310A5C8BAD__INCLUDED_)
