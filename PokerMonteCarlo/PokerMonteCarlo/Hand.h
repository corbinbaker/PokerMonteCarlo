#pragma once
class Hand
{
	void clearHand();
	void addCard(Card card);
	int getCount();
	Card getCard(int n);
	Hand getVisible();
	int evaluatehand();
};

