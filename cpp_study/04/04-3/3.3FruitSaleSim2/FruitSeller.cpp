#include <iostream>
#include "FruitSeller.h"

using namespace std;

FruitSeller::FruitSeller(int price, int num, int money)
{
	APPLE_PRICE = price;
	numOfApples = num;
	myMoney = money;
}

int FruitSeller::SaleApples(int num)
{
	if (num < 0)
	{
		cout << "0개 미만은 팔수가 없어요" << endl;
		num = 0;
	}
	numOfApples -= num;
	myMoney += APPLE_PRICE * num;

	return APPLE_PRICE * num;
}

void FruitSeller::ShowSalesResult() const
{
	cout << "과일 판매자의 현황" << endl;
	cout << "남은 사과: " << numOfApples << endl;
	cout << "판매 수익: " << myMoney << endl << endl;
}