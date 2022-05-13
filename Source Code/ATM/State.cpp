///////////////////////////////////////////////////////////
//  State.cpp
//  Implementation of the Class State - Abstract Base class
//  Created on:      02-May-2009 7:39:21 PM
///////////////////////////////////////////////////////////
#include "StdAfx.h"
#include "State.h"

State::State(){

}

State::~State(){

}

void State::Initialize(){

}

void State::Card(){

}

void State::CorrectLogin(){

}

void State::IncorrectLogin(){

}

void State::CorrectPin(){

}

void State::IncorrectPin(int max){

}

void State::AboveMinBalance(){

}

void State::BelowMinBalance(){

}

void State::Deposit(){

}

void State::Withdraw(){

}

void State::Balance(){

}

void State::Exit(){

}