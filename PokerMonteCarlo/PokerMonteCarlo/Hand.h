#pragma once
class Hand
{
	vector<Card> h;
	Hand(vector<Card> vectorH);
public:
	void clearHand();
	void addCard(Card card);
	int getCount();
	Card getCard(int n);
	Hand getVisible();
	int evaluatehand();
};

