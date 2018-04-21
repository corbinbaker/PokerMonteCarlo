#include "AlphaPlayer.h"
#include "Player.h"
#include "Hand.h"
#include "BetHistory.h"
#include "PlayerType.h"



int AlphaPlayer::getBet(Hand opponent, BetHistory bh, int bet2player, bool canRaise, int pot) {
	/*TODO: This is a derived class of Player that evaluates domain information for the current AI player and decides on a player bet.  
	This uses the getBet() method. The Alpha AI should use the attached rules in deciding the bet for the AI player.   */

	if (opponent.evaluateHand() > this->getHand().evaluateHand()) { //if human has better hand, fold
		bh.addBet(Bet(int(PlayerType::ALPHA), 0));
		return 0;
	}

	else { //if human does not have better hand, raise or call 
		if (canRaise) { //raise

			if(this->getChips() > bet2player*2){
				bh.addBet(Bet(int(PlayerType::ALPHA), bet2player * 2));
				return bet2player * 2;
			}

			else { //can't afford to double the bet
				bh.addBet(Bet(int(PlayerType::ALPHA), bet2player + 1));
				return bet2player + 1;
			}
		}

		else { //call, (can't raise)
			bh.addBet(Bet(int(PlayerType::ALPHA), bet2player));
			return bet2player;
		}
	}

	return -1; //error
}
