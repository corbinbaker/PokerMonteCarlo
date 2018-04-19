#pragma once
#include "Hand.h"
#include "BetHistory.h"

class Player
{
private:
	Hand pHand;
	BetHistory bhistory;
	int pID;
	int pChips;

public:
	int getBet(Hand, BetHistory, int, bool, int );
	void setID(int);
	int getID();
	void setHand(Hand);
	Hand getHand();
	void setChips(int);
	int getChips();
};

