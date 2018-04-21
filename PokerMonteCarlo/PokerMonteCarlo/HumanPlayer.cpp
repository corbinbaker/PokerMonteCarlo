#include "HumanPlayer.h"
#include "Player.h"
#include "Hand.h"
#include "BetHistory.h"
#include <string>
#include <iostream>

using namespace std;

int HumanPlayer::getBet(Hand opponent, BetHistory bh, int bet2player, bool canRaise, int pot) {
	/*This is a derived class of Player that presents domain information to the current human player
	through I/O and then allows the player to input their bet.  Code should be implemented both to communicate
	to the game player the current status of the game (i.e. current hands showing, pot, bet history, etc.) and
	to validate the bets of the human player before returning the proper bet value.  This uses the getBet() method.*/

	int currentBet = 0; //if bet = 0 --> fold TODO: REWORK HUMAN PLAYER STRUCTURE
						//if userinput does not select any valid input they fold

	//io block for action calls:
	string input;
	cin >> input;

	if (input == "call"){			//call
		currentBet = bet2player;
	}

	else if (input == "bet") {		//bet
		//get players bet
		int inbet = 0;
		currentBet = bet2player + inbet;
	}

	else if (input == "quit") {		//quit
		currentBet = -1;
	}

	return currentBet;
}

void HumanPlayer::getInput() {

}

void HumanPlayer::call() {

}


void HumanPlayer::bet() {

}


void HumanPlayer::quit() {

}




