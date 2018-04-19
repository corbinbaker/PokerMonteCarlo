#pragma once
using namespace std;
class BetHistory
{
	vector<Bet> bhistory;
public:
	void clearHistory();
	void addBet(Bet bet);
	int getCount();
	Bet getBet(int n);

};

