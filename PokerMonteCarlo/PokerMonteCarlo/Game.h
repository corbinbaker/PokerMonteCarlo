#pragma once
#include "Player.h"

class Game
{
private:
	int pot = 0;
	void ante(Player p0, Player p1);
	void betting(Player p0, Player p1);
	void betWin(Player p0, Player p1);
	bool checkWin(Player p0, Player p1);

public:
	bool playGame(Player p0, Player p1, int &chips0, int &chips1, bool reportFlag);
};

