#include <iostream>
#include "FruitBuyer.h"

using namespace std;

void FruitBuyer::InitMembers(int money)
{
	myMoney = money;
	numOfApples = 0;
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
	cout << "���� �ܾ�: " << myMoney << endl;
	cout << "��� ����: " << numOfApples << endl << endl;
}