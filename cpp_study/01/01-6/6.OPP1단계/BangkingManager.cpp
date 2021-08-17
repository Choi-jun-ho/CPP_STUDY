/*
* Banking Manager ver 0.1
*/

#include <iostream>
#include <cstring>

using namespace std;
const int NAME_LEN = 100;

void ShowMenu(void);
void MakeAccount(void);
void DepositMoney(void);
void WithdrawMoney(void);
void ShowAllAccInfo(void);

enum 
{
	MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT
};

typedef struct {
	int accID;

	char cusName[NAME_LEN];

	int balance;
}Account;

int accNum = 0;
Account accArr[100];

int main(void)
{
	int choose = 0;
	

	while (true)
	{
		ShowMenu();
		cin >> choose;

		if (choose == MAKE)
		{
			MakeAccount();
		}
		else if (choose == DEPOSIT)
		{
			DepositMoney();
		}
		else if (choose == WITHDRAW)
		{
			WithdrawMoney();
		}
		else if (choose == INQUIRE)
		{
			ShowAllAccInfo();
		}
		else if (choose == EXIT)
		{
			return 0;
		}
		else
		{
			cout << "���� �޴� �Դϴ�." << endl;
		}
	}

	return 0;
}

void ShowMenu(void)
{
	cout << "-----Menu-----" << endl;
	cout << "1. ���°���" << endl;
	cout << "2. �� ��" << endl;
	cout << "3. �� ��" << endl;
	cout << "4. ���� ���� ��ü ���" << endl;
	cout << "5. ���α׷� ����" << endl;
	cout << "���� : ";
}

void MakeAccount(void)
{
	int id;
	char name[NAME_LEN];
	int money;

	cout << "[���°���]" << endl;
	cout << "����ID : ";
	cin >> id;

	cout << "�̸� : ";
	cin >> name;

	cout << "�Աݾ� : ";
	cin >> money;

	accArr[accNum].accID = id;
	strcpy_s(accArr[accNum].cusName, sizeof(accArr[accNum].cusName) ,name);
	accArr[accNum].balance = money;
	
	accNum++;
}

void DepositMoney(void)
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
		if (accArr[i].accID == id)
		{
			accArr[i].balance += money;
			cout << "�ԱݿϷ�" << endl;

			return;
		}
		
	}

	cout << "��ȿ���� �ʴ� ID �Դϴ�." << endl;
}

void WithdrawMoney(void)
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
		if (accArr[i].accID == id)
		{
			if (accArr[i].balance < money) {
				cout << "�ܾ��� �����մϴ�" << endl;
				return;
			}
			accArr[i].balance -= money;
			cout << "��ݿϷ�" << endl;

			return;
		}
	}

	cout << "��ȿ���� �ʴ� ID �Դϴ�." << endl;
}

void ShowAllAccInfo(void)
{	
	for (int i = 0; i < accNum; i++) {
		cout << "����ID: " << accArr[i].accID << endl;
		cout << "�� ��: " << accArr[i].cusName << endl;
		cout << "�� ��: " << accArr[i].balance << endl;
		cout << endl;
	}

}