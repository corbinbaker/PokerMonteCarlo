#pragma once

class Card {
	Card(string cardName, int cardValue);

	string getCardName();

	int getCardValue();

	bool isFaceup();

	void setFaceup(bool b);
};
