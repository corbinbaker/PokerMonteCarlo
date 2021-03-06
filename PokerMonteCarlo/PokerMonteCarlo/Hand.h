#pragma once
#include <vector>
#include "Card.h"
using namespace std;

class Hand
{
private:
	vector<Card> h;
	Hand(vector<Card> vectorH);
public:
	Hand();
	void clearHand();
	void addCard(Card card);
	int getCount();
	Card getCard(int n);
	Hand getVisible();
	int evaluateHand();
};

