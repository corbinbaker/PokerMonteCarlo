#pragma once
#include "Hand.h"
#include "BetHistory.h"
#include "Player.h"

class AlphaPlayer : public Player
{
public:
	int getBet(Hand opponent, BetHistory bh, int bet2player, bool canRaise, int pot);
};

