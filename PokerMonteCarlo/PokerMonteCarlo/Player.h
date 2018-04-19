#pragma once
class Player
{
	Hand pHand;
	BetHistory bhistory;
	int pID;
	int pChips;

public:
	int getBet(Hand opponent, BetHistory bh, int bet2player, bool canRaise, int pot);
	void setID(int id);
	int getID();
	void setHand(Hand hand);
	Hand getHand();
	void setChips(int chips);
	int getChips();
};

