//PRANEEL MISTHRY 202515355
//COMPUTER METHODS 3 TUT5-CARDGAME
//18 MARCH 2016
/********************************************************************************************************************/
#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <ctime>

#include "Card.h"

using namespace std;

Card::Card(){
	cardColour = "no colour";
	cardNumber = 1;
}

Card::Card(string icolour, int inumber)
{
	cardColour = icolour;
	cardNumber = inumber;
}

Card::~Card(){

}

string Card::colour(){
	return cardColour;
}

int Card::number(){
	return cardNumber;
}

void Card::print(){
	cout << cardColour << " " << cardNumber << endl;
}