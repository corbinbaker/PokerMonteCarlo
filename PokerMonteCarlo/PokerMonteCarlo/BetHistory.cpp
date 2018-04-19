#include "Bet.h"
#include "BetHistory.h"
#include <vector>

class BetHistory
{
private:
	vector<Bet> bhistory;

public:
	void clearHistory() {
		bhistory.clear();
	}

	void addBet(Bet bet) {
		bhistory.push_back(bet);
	}

	int getCount() {
		return bhistory.size();
	}

	Bet getBet(int n) {
		return bhistory[n];
	}

};


