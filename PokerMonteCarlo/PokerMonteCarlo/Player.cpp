#include "Player.h"
#include "BetHistory.h"
#include "Hand.h"


int Player::getBet(Hand opponent, BetHistory bh, int bet2player, bool canRaise, int pot) {
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


