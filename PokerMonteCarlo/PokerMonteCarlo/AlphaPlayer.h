#pragma once
class AlphaPlayer : public Player
{
	int getBet(Hand opponent, BetHistory bh, int bet2player, bool canRaise, int pot);
};

