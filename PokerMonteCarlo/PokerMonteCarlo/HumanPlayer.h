#pragma once
#include "Player.h"

class HumanPlayer : public Player
{
public:
	int getBet(Hand opponent, BetHistory bh, int bet2player, bool canRaise, int pot);
};

