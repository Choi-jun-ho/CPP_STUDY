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
		cout << "0�� �̸��� �ȼ��� �����" << endl;
		num = 0;
	}
	numOfApples -= num;
	myMoney += APPLE_PRICE * num;

	return APPLE_PRICE * num;
}

void FruitSeller::ShowSalesResult() const
{
	cout << "���� �Ǹ����� ��Ȳ" << endl;
	cout << "���� ���: " << numOfApples << endl;
	cout << "�Ǹ� ����: " << myMoney << endl << endl;
}