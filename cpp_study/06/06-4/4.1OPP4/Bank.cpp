#include <iostream>
#include <cstring>
#include "Bank.h"

using namespace std;

void Bank::ShowMenu(void) const
{
	cout << "-----Menu-----" << endl;
	cout << "1. ���°���" << endl;
	cout << "2. �� ��" << endl;
	cout << "3. �� ��" << endl;
	cout << "4. ���� ���� ��ü ���" << endl;
	cout << "5. ���α׷� ����" << endl;
	cout << "���� : ";
}

void Bank::MakeAccount(void)
{
	int id;
	char name[100];
	int money;

	cout << "[���°���]" << endl;
	cout << "����ID : ";
	cin >> id;

	cout << "�̸� : ";
	cin >> name;

	cout << "�Աݾ� : ";
	cin >> money;

	this->cus[this->accNum] = new Customer(id, name, money);
	this->accNum++;
}

void Bank::DepositMoney()
{
	int id;
	int money;

	cout << "[��   ��]" << endl;
	cout << "����ID: ";
	cin >> id;

	cout << "�Աݾ�: ";
	cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (this->cus[i]->getAccID() == id)
		{
			cus[i]->plusBalance(money);
			cout << "�ԱݿϷ�" << endl;

			return;
		}

	}

	cout << "��ȿ���� �ʴ� ID �Դϴ�." << endl;
}

void Bank::WithdrawMoney()
{
	int id;
	int money;

	cout << "[��   ��]" << endl;
	cout << "����ID: ";
	cin >> id;

	cout << "��ݾ�: ";
	cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (this->cus[i]->getAccID() == id)
		{
			if (this->cus[i]->getBalance() < money) {
				cout << "�ܾ��� �����մϴ�" << endl;
				return;
			}
			this->cus[i]->minBalance(money);
			cout << "��ݿϷ�" << endl;

			return;
		}
	}

	cout << "��ȿ���� �ʴ� ID �Դϴ�." << endl;
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
			cout << "���� �޴� �Դϴ�." << endl;
		}

		cout << endl;
	}
}