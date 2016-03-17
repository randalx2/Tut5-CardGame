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
	cardColour = "red";  //Default colour chosen
	cardNumber = 1;
}

Card::Card(string icolour, int inumber)
{
	//instead of using mutator functions this constructor will do the checking correct
	//inputs of colours and numbers
	/*if ((icolour != "red") && (icolour != "black"))
	{
		cout << "Invalid input for colour. Please enter red or black to override colour in constructor" << endl;
		cin >> cardColour;
		cardNumber = inumber;
	}*/
	if (((icolour != "red") && (icolour != "black")) && ((inumber < 0) || (inumber > 10)))
	{
		cout << "Invalid inputs for both colour and number. Please enter correct parameters now" << endl;
		cin >> cardColour >> cardNumber;
	}

	else if ((inumber <= 0) || (inumber > 10))
	{
		cout << "Invalid input for card number. Please enter 1 to 10 to override contructor attribute" << endl;
		cin >> cardNumber;
		cardColour = icolour;
	}
	else if ((icolour != "red") && (icolour != "black"))
	{
		cout << "Invalid input for colour. Please enter red or black to override colour in constructor" << endl;
		cin >> cardColour;
		cardNumber = inumber;
	}

	else
	{
		cardColour = icolour;
		cardNumber = inumber;
	}

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