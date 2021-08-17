#include <iostream>
#include "FruitBuyer.h"

using namespace std;

FruitBuyer::FruitBuyer(const int &money)
	:myMoney(money), numOfApples(0)
{
	//empty
}

void FruitBuyer::BuyApples(FruitSeller &seller, int num)
{
	myMoney -= seller.SaleApples(num);
	if (num < 0)
		num = 0;
	numOfApples += num;
}

void FruitBuyer::ShowBuyResult() const
{
	cout << "과일 구매자의 현황" << endl;
	cout << "현재 잔액: " << myMoney << endl;
	cout << "사과 개수: " << numOfApples << endl << endl;
}