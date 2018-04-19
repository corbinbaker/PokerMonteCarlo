#pragma once
using namespace std;

class Card {
private:
	bool fUp;
	string cName;
	int cValue;

public:
	Card(string, int);
	string getCardName();
	int getCardValue();
	bool isFaceup();
	void setFaceup(bool);
};
