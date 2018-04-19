
#include "BetHistory.h"
#include "Hand.h"

class Player
{
private:
	Hand pHand;
	BetHistory bhistory;
	int pID;
	int pChips;

public:
	int getBet(Hand opponent, BetHistory bh, int bet2player, bool canRaise, int pot) {
		return 0;
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
