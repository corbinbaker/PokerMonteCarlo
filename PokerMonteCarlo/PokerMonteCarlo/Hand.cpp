#include "Hand.h"
#include "Card.h"
#include <vector>

class Hand
{
	vector<Card> h;

	Hand(vector<Card> vectorH) {
		h = vectorH;
	}

public:
	void clearHand() {
		h.clear();
	}

	void addCard(Card card) {
		h.push_back(card);
	}

	int getCount() {
		h.size();
	}

	Card getCard(int n) {
		return h[n];
	}

	Hand getVisible() {
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

	int evaluatehand() {
		int out = 0;
		for (Card c : h)
		{
			out += c.getCardValue();
		}
		return out;
	}
};
