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
	cout << "���� �������� ��Ȳ" << endl;
	cout << "���� �ܾ�: " << myMoney << endl;
	cout << "��� ����: " << numOfApples << endl << endl;
}