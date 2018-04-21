#include "Game.h"
#include "Player.h"



bool Game::playGame(Player p0, Player p1, int &chips0, int &chips1, bool reportFlag) {
	/*TODO: Plays a game between a player of type p0 and p1.   Chips is the number of chips 
	each player respectively has at start and end of the game.   reportFlag is just a flag
	to turn on and off I/O within the game (so you can do Monte Carlo runs without a lot of output).  
	The method returns true if someone wants to quit the program.*/
	
	p0.setChips(chips0);
	p1.setChips(chips1);

	while (true) {
		ante(p0, p1);
		betting(p0, p1);
		betWin(p0, p1);

		if (checkWin(p0, p1)) {
			break;
		}
	}

	return true;
}


void Game::ante(Player p0, Player p1) {
	if (p0.getChips() <= 10)
	{
		pot += p0.getChips();
		p0.setChips(0);
	}
	else
	{
		pot += 10;
		p0.setChips(p0.getChips() - 10);
	}


	if (p1.getChips() <= 10)
	{
		pot += p1.getChips();
		p1.setChips(0);
	}
	else
	{
		pot += 10;
		p1.setChips(p1.getChips() - 10);
	}
}


void Game::betting(Player p0, Player p1) {

}


void Game::betWin(Player p0, Player p1) {

}


bool Game::checkWin(Player p0, Player p1) { 
	pot = 0;
	return false;
}