#include "Card.h"
using namespace std;


Card::Card(string cardName, int cardValue) {
	cName = cardName;
	cValue = cardValue;
}

string Card::getCardName()
{
	return cName;
}

int Card::getCardValue()
{
	return cValue;
}

bool Card::isFaceup()
{
	return fUp;
}

void Card::setFaceup(bool b)
{
	fUp = b;
}


