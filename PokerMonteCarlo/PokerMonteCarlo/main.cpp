#include "Game.h"
#include "AlphaPlayer.h"
#include "HumanPlayer.h"

int main()
{
	Game g;
	HumanPlayer hp;
	AlphaPlayer ap;
	int hpChips = 1000;
	int apChips = 1000;
	bool IO = true;
	g.playGame(hp, ap, hpChips, apChips, IO);

	return 0;
}
