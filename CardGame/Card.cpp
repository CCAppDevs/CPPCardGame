#include "Card.h"

Card::Card()
{
	// this is setting up our object for first use
	this->Value = 1;
	this->Suit = "Heart";
}

Card::Card(int value, string suit)
{
	this->Value = value;
	this->Suit = suit;
}

Card::Card(int value, int suit)
{
	this->Value = value;

	switch (suit) {
	case 1:
		SetSuit("Hearts");
		break;
	case 2:
		SetSuit("Clubs");
		break;
	case 3:
		SetSuit("Diamonds");
		break;
	case 4:
		SetSuit("Spades");
		break;
	default:
		break;
	}
}

string Card::ToString()
{
	return to_string(this->Value) + " of " + this->Suit;
}

int Card::GetValue()
{
	return this->Value;
}

void Card::SetValue(int value)
{
	this->Value = value;
}

string Card::GetSuit()
{
	return this->Suit;
}

void Card::SetSuit(string suit)
{
	this->Suit = suit;
}
