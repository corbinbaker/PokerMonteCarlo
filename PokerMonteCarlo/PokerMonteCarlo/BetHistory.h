#pragma once
#include "Bet.h"
#include <vector>

using namespace std;

class BetHistory
{
private:
	vector<Bet> bhistory;
public:
	void clearHistory();
	void addBet(Bet bet);
	int getCount();
	Bet getBet(int n);
};

