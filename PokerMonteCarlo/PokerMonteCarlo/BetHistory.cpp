#include "BetHistory.h"

vector<Bet> bhistory;


void BetHistory::clearHistory() {
	bhistory.clear();
}

void BetHistory::addBet(Bet bet) {
	bhistory.push_back(bet);
}

int BetHistory::getCount() {
	return bhistory.size();
}

Bet BetHistory::getBet(int n) {
	return bhistory[n];
}




