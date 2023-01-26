#pragma once
#include <iostream>
#include <string>

using namespace std;

class Card
{

private:
	int Value;
	string Suit;

public:

	// constructor
	Card();
	Card(int value, string suit);
	Card(int value, int suit);

	string ToString();

	// getter
	int GetValue();
	// setter
	void SetValue(int value);

	string GetSuit();
	void SetSuit(string suit);
};

