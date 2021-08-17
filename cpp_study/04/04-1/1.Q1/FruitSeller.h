#ifndef __FruitSeller_H__
#define __FruitSeller_H__

class FruitSeller
{
private:
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public:
	void InitMembers(int price, int num, int money);
	int SaleApples(int num);
	void ShowSalesResult() const;
};

#endif