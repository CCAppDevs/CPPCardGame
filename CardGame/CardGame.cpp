#include <iostream>
#include <vector>

#include "Card.h"

using namespace std;

void PrintMenu();

int main()
{
	// deck of 52 integers (old school array)
	// int deck[52];

	vector<Card> deck;
	vector<Card> Player1;
	vector<Card> Player2;

	for (int i = 1; i <= 4; i++) {
		for (int j = 1; j <= 13; j++) {
			Card theCard = Card(j, i);
			deck.push_back(theCard);
		}
	}

	PrintMenu();

	for (int i = 0; i < deck.size(); i++) {
		cout << deck[i].ToString() << endl;
	}

	cout << "The deck has a size of: " << deck.size() << endl;
}

void PrintMenu() {
	cout << "Main Menu\n";
	cout << "1. New Game\n";
	cout << "2. Shuffle\n";
	cout << "3. Deal\n";
	cout << "0. End Game\n";
}