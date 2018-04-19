#include "Bet.h"


Bet::Bet(int player, int amount) {
	p = player;
	am = amount;
}

int Bet::getPlayer() {
	return p;
}

int Bet::getAmount() {
	return am;
}

