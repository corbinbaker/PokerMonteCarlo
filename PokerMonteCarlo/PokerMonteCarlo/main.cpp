#include "Game.h"
#include "AlphaPlayer.h"
#include "HumanPlayer.h"

int main()
{
	Game g;
	HumanPlayer hp;
	AlphaPlayer ap;
	int hpChips = 100;
	int apChips = 100;
	bool IO = true;
	g.playGame(hp, ap, hpChips, apChips, IO);

	return 0;
}
