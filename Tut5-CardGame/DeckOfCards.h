//PRANEEL MISTHRY 202515355
//COMPUTER METHODS 3 TUT5-CARDGAME
//18 MARCH 2016
/********************************************************************************************************************/
#pragma once
#ifndef DECKOFCARDS_H
#define DECKOFCARDS_H
#include <string>

#include "Card.h"

using namespace std;

class DeckOfCards{
private: int cardsRemaining;
		 Card *cardPtr = NULL;  //pointer for card dynamic array
public: DeckOfCards();
		~DeckOfCards();
		DeckOfCards reset();  //Resets cards back to original deck
		void shuffle();
		Card draw();  //returns card and removes it using DMA
		Card peek(); //returns card but doesn't remove it
		int numberOfCards();
};

#endif