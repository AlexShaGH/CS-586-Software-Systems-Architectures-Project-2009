///////////////////////////////////////////////////////////
//  DataATM2.cpp
//  Implementation of the Class DataATM2
//  Created on:      02-May-2009 7:38:39 PM
//  Original author: Alex
///////////////////////////////////////////////////////////
#include "StdAfx.h"
#include "DataATM2.h"

DataATM2::DataATM2(){
	maxatt = 3; // maximum allowed pin attempts
	minbal = 50; // min balance
	penalty = 4;
}

DataATM2::~DataATM2(){

}