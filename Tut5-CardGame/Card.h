//PRANEEL MISTHRY 202515355
//COMPUTER METHODS 3 TUT5-CARDGAME
//18 MARCH 2016
/********************************************************************************************************************/
#pragma once
#ifndef CARD_H
#define CARD_H
#include <string>

using namespace std;

class Card {
private: string cardColour; 
		 int cardNumber;
public:
	Card();
	Card(string, int);  //Overloading constructor used to set attributes
	~Card();
	string colour();
	int number();
	void print();
};

#endif