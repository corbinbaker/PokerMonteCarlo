#pragma once
#include "Bet.h"
using namespace std;

class BetHistory
{
private:
	vector<Bet> bhistory;
public:
	void clearHistory();
	void addBet(Bet);
	int getCount();
	Bet getBet(int);
};

