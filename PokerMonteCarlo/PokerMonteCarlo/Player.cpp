#include "Player.h"
#include "BetHistory.h"
#include "Hand.h"

class Player
{
	Hand pHand;
	BetHistory bhistory;
	int pID;
	int pChips;

public:
	int getBet(Hand opponent, BetHistory bh, int bet2player, bool canRaise, int pot) {

	}

	void setID(int id) {
		pID = id;
	}

	int getID() {
		return pID;
	}

	void setHand(Hand hand) {
		pHand = hand;
	}

	Hand getHand() {
		return pHand;
	}

	void setChips(int chips) {
		pChips = chips;
	}

	int getChips() {
		return pChips;
	}

};
