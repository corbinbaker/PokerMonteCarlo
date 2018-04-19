#include "Card.h"

class Card
{
	bool fUp = false;
	string cName;
	int cValue;

public:
	Card(string cardName, int cardValue) {
		cName = cardName;
		cValue = cardValue;
	}

	string getCardName()
	{
		return cName;
	}

	int getCardValue()
	{
		return cValue;
	}

	bool isFaceup()
	{
		return fUp;
	}

	void setFaceup(bool b)
	{
		fUp = b;
	}
};

