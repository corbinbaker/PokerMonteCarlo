#pragma once
#include "Player.h"

class HumanPlayer : public Player
{
private:
	void getInput();
	void call();
	void bet();
	void quit();
public:
	int getBet(Hand opponent, BetHistory bh, int bet2player, bool canRaise, int pot);
};

