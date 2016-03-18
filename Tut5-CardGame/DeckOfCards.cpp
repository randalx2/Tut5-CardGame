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
	cardPtr[cardsRemaining - 1].print();  //print out card at top of deck
	return cardPtr[cardsRemaining - 1];
}

Card DeckOfCards::draw(){
	cardPtr[cardsRemaining - 1].print();
	cardsRemaining--;  //Decrement card count
	return cardPtr[cardsRemaining];
	delete &cardPtr[cardsRemaining];
}