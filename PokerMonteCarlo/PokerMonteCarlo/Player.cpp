#include "Player.h"
#include "BetHistory.h"
#include "Hand.h"


int Player::getBet(Hand opponent, BetHistory bh, int bet2player, bool canRaise, int pot) {
	/*This method passes all of the necessary domain information of the game to the human or AI player.  
	Other information about the player like the players hand should already be part of the Player object.   
	The method should then return the bet made by the player.  This bet represents the amount to be put in the pot,
	so it would include the amount bet2player which is the previous players raise.  A bet of -1 is a command to quit 
	(only comes from the human player).  A bet of 0 is a fold IF there is a bet to the player (otherwise, it's just a call).*/

	return 0;
}

void Player::setID(int id) {
	pID = id;
}

int Player::getID() {
	return pID;
}

void Player::setHand(Hand hand) {
	pHand = hand;
}

Hand Player::getHand() {
	return pHand;
}

void Player::setChips(int chips) {
	pChips = chips;
}

int Player::getChips() {
	return pChips;
}


