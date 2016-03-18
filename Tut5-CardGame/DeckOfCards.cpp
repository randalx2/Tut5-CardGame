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

DeckOfCards::DeckOfCards(){
	cardsRemaining = 20; //Start with a full deck again
	cardPtr = new Card[cardsRemaining];  //Dynamic pointer array
	//Fill the deck with the red and black cards
	//Filling the first half with red cards of numbers 1 to 10
	for (int i = 0; i < 10; i++)
	{
		cardPtr[i] = Card("red", i + 1);
	}
	//Filling the second half with black cards of numbers 1 to 10
	for (int i = 10; i < 20; i++)
	{
		cardPtr[i] = Card("black", (i + 1) - 10);
	}
	//Print out the default deck for testing
	cout << endl;
	cout << "Default Deck is: " << endl;

	for (int i = 0; i < 20; i++)
	{
		cardPtr[i].print();
	}
}

DeckOfCards::~DeckOfCards(){
	//Since using DMA the destructor has to delete all the card objects created
	//Delete the entire card array
	delete[] cardPtr;
}

DeckOfCards DeckOfCards::reset(){
	//Pretty much does the same thing the constructor did
	//when the deck was first created
	return DeckOfCards();
}

int DeckOfCards::numberOfCards(){
	return cardsRemaining;
}

Card DeckOfCards::peek(){
	cout << "Peeking at Card" << endl;
	cardPtr[cardsRemaining - 1].print();  //print out card at top of deck
	return cardPtr[cardsRemaining - 1];
}

Card DeckOfCards::draw(){
	cout << "Drawing Card" << endl;
	cardPtr[cardsRemaining - 1].print();
	cardsRemaining--;  //Decrement card count
	return cardPtr[cardsRemaining];
	delete &cardPtr[cardsRemaining];
}

void DeckOfCards::shuffle(){
	//shuffle() shuffles the ORDER of cards (you should do this by picking two random
	//cards and switching their order; repeat this 50 times). Only works if there are 2
	//or more cards.
	srand((unsigned)time(NULL));  //seed the randomizer
	Card temp;
	int r1 = 0; //first randomizer index variable
	int r2 = 0; //second randomizer variable
	for (int i = 0; i < 50; i++)
	{
		r1 = rand() % 19;  //random number between 0 and 19
		r2 = rand() % 19;
		if (r1 != r2)
		{
			temp = cardPtr[r1];
			cardPtr[r1] = cardPtr[r2];
			cardPtr[r2] = temp;
		}	
		else
		{
			cout << "Error During Shuffling. Trying again" << endl;
		}
	}
	//Print out shuffled cards
	cout << "Cards Shuffled!!" << endl;
	for (int i = 0; i < 20; i++)
	{
		cardPtr[i].print();
	}

}