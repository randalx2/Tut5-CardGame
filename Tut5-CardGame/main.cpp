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

	//Testing DeckOfCards
	DeckOfCards *d1 = new DeckOfCards(); //Since we have dynamic attributes, best to make the object dynamic as well
	cout << endl;
	cout << "Cards Remaining: " << d1->numberOfCards() << endl;

	d1->peek();
	cout << endl;
	d1->shuffle();
	cout << endl;
	d1->draw();
	cout << "Cards Remaining: " << d1->numberOfCards() << endl;
	cout << endl;

	cout << "Resetting Deck Now" << endl;
	d1->reset(); //Reset back to original deck
	//NB Testing Complete. Further unit tests to be done
	cout << endl;
	cout << "Cards Remaining " << d1->numberOfCards();
	cout << endl;
	cout << "Drawing all cards til none are left! " << endl;
	cout << endl;
	for (int i = 0; i < 20; i++)
	{
		d1->draw();
		cout << "Cards Remaining: " << d1->numberOfCards() << endl;
	}

	delete d1;

	system("PAUSE");
	return 0;
}