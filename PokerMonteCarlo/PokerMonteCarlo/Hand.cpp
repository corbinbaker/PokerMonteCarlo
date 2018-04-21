#include "Hand.h"
#include "Card.h"


Hand::Hand() {}

Hand::Hand(vector<Card> vectorH) {
	h = vectorH;
}


void Hand::clearHand() {
	h.clear();
}

void Hand::addCard(Card card) {
	h.push_back(card);
}

int Hand::getCount() {
	return h.size();
}

Card Hand::getCard(int n) {
	return h[n];
}

Hand Hand::getVisible() {
	vector<Card> out;
	for (Card c : h)
	{
		if (c.isFaceup())
		{
			out.push_back(c);
		}
	}

	return Hand(out);
}

int Hand::evaluateHand() {
	int out = 0;
	for (Card c : h)
	{
		out += c.getCardValue();
	}
	return out;
}

