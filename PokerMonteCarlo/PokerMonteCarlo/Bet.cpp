#include "Bet.h"


class Bet {
	int p, am;

public:
	Bet(int player, int amount) {
		p = player;
		am = amount;
	}

	int getPlayer() {
		return p;
	}

	int getAmount() {
		return am;
	}
};
