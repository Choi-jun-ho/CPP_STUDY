#ifndef  __FruitBuyer_H__
#define __FruitBuyer_H__

#include "FruitSeller.h"

class FruitBuyer
{
private:
	int myMoney;
	int numOfApples;

public:
	FruitBuyer(const int &money);
	void BuyApples(FruitSeller &seller, int num);
	void ShowBuyResult() const;
};

#endif