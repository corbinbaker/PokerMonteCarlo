#include "AlphaPlayer.h"
#include "Player.h"
#include "Hand.h"
#include "BetHistory.h"


class AlphaPlayer : public Player
{
public:
	int getBet(Hand opponent, BetHistory bh, int bet2player, bool canRaise, int pot) {
		return 0;
	}
};