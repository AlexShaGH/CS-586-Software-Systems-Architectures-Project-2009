///////////////////////////////////////////////////////////
//  EFSM-Data.cpp
//  Implementation of the Class EFSM-Data - platfrom 
//  independent data
//  Created on:      02-May-2009 7:38:41 PM
//  Original author: Alex
///////////////////////////////////////////////////////////
#include "StdAfx.h"
#include "EFSM-Data.h"

EFSM_Data::EFSM_Data(){
	attempts = 0; // pin attempts counter
	withdrawn = false; // withdrawal indication flag
}

EFSM_Data::~EFSM_Data(){

}