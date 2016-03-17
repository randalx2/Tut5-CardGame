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
#include "DeckOfCards.h"

using namespace std;

int main()
{
	//Testing of the individual card class
	Card c1("black", 5);
	c1.colour();
	c1.number();
	c1.print();
	//NB Card testing complete. Will perform unit tests as well




	system("PAUSE");
	return 0;
}