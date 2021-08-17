#ifndef __FruitSeller_H__
#define __FruitSeller_H__

class FruitSeller
{
private:
	const int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public:
	FruitSeller(const int &price, const int &num,const int &money);
	int SaleApples(int num);
	void ShowSalesResult() const;
};

#endif