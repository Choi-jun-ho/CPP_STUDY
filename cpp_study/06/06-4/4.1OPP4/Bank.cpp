#include <iostream>
#include <cstring>
#include "Bank.h"

using namespace std;

void Bank::ShowMenu(void) const
{
	cout << "-----Menu-----" << endl;
	cout << "1. 계좌개설" << endl;
	cout << "2. 입 금" << endl;
	cout << "3. 출 금" << endl;
	cout << "4. 계좌 정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
	cout << "선택 : ";
}

void Bank::MakeAccount(void)
{
	int id;
	char name[100];
	int money;

	cout << "[계좌개설]" << endl;
	cout << "계좌ID : ";
	cin >> id;

	cout << "이름 : ";
	cin >> name;

	cout << "입금액 : ";
	cin >> money;

	this->cus[this->accNum] = new Customer(id, name, money);
	this->accNum++;
}

void Bank::DepositMoney()
{
	int id;
	int money;

	cout << "[입   금]" << endl;
	cout << "계좌ID: ";
	cin >> id;

	cout << "입금액: ";
	cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (this->cus[i]->getAccID() == id)
		{
			cus[i]->plusBalance(money);
			cout << "입금완료" << endl;

			return;
		}

	}

	cout << "유효하지 않는 ID 입니다." << endl;
}

void Bank::WithdrawMoney()
{
	int id;
	int money;

	cout << "[출   금]" << endl;
	cout << "계좌ID: ";
	cin >> id;

	cout << "출금액: ";
	cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (this->cus[i]->getAccID() == id)
		{
			if (this->cus[i]->getBalance() < money) {
				cout << "잔액이 부족합니다" << endl;
				return;
			}
			this->cus[i]->minBalance(money);
			cout << "출금완료" << endl;

			return;
		}
	}

	cout << "유효하지 않는 ID 입니다." << endl;
}

void Bank::ShowAllAccInfo(void) const
{
	for (int i = 0; i < this->accNum; i++) {
		this->cus[i]->Show();
	}
}

void Bank::Exit(void)
{
	for (int i = 0; i < this->accNum; i++)
	{
		delete this->cus[i];
	}
}

Bank::Bank(void)
	: accNum(0)
{
	// empty
}

Bank::Bank(const Bank & ref)
	: accNum(ref.accNum)
{
	for (int i = 0; i < ref.accNum; i++)
	{
		this->cus[i] = new Customer(ref.cus[i]->getAccID(), ref.cus[i]->getCusName(), ref.cus[i]->getBalance());
	}
}

Bank::~Bank(void)
{

}

void Bank::Run(void)
{
	int choose = 0;

	while (true)
	{
		this->ShowMenu();
		cin >> choose;
		cout << endl;

		if (choose == this->MAKE)
		{
			this->MakeAccount();
		}
		else if (choose == this->DEPOSIT)
		{
			this->DepositMoney();
		}
		else if (choose == this->WITHDRAW)
		{
			this->WithdrawMoney();
		}
		else if (choose == this->INQUIRE)
		{
			this->ShowAllAccInfo();
		}
		else if (choose == this->EXIT)
		{
			this->Exit();
			break;
		}
		else
		{
			cout << "없는 메뉴 입니다." << endl;
		}

		cout << endl;
	}
}