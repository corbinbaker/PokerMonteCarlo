#pragma once
#include <string>
using namespace std;

class Card {
	bool fUp;
	string cName;
	int cValue;

public:
	Card(string cardName, int cardValue);
	string getCardName();
	int getCardValue();
	bool isFaceup();
	void setFaceup(bool b);
};
