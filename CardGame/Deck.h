#pragma once
#include <Vector>
#include "Card.h"


class Deck
{
	// data
		// collection of cards
	std::vector<Card> Cards;

	// functions/methods
		// shuffle
	void Shuffle();
		// draw a card
	Card DrawCard();
		// reset
	void Reset();
};

