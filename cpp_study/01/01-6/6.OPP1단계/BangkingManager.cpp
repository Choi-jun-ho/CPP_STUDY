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
			cout << "없는 메뉴 입니다." << endl;
		}
	}

	return 0;
}

void ShowMenu(void)
{
	cout << "-----Menu-----" << endl;
	cout << "1. 계좌개설" << endl;
	cout << "2. 입 금" << endl;
	cout << "3. 출 금" << endl;
	cout << "4. 계좌 정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
	cout << "선택 : ";
}

void MakeAccount(void)
{
	int id;
	char name[NAME_LEN];
	int money;

	cout << "[계좌개설]" << endl;
	cout << "계좌ID : ";
	cin >> id;

	cout << "이름 : ";
	cin >> name;

	cout << "입금액 : ";
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

	cout << "[입   금]" << endl;
	cout << "계좌ID: ";
	cin >> id;

	cout << "입금액: ";
	cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i].accID == id)
		{
			accArr[i].balance += money;
			cout << "입금완료" << endl;

			return;
		}
		
	}

	cout << "유효하지 않는 ID 입니다." << endl;
}

void WithdrawMoney(void)
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
		if (accArr[i].accID == id)
		{
			if (accArr[i].balance < money) {
				cout << "잔액이 부족합니다" << endl;
				return;
			}
			accArr[i].balance -= money;
			cout << "출금완료" << endl;

			return;
		}
	}

	cout << "유효하지 않는 ID 입니다." << endl;
}

void ShowAllAccInfo(void)
{	
	for (int i = 0; i < accNum; i++) {
		cout << "계좌ID: " << accArr[i].accID << endl;
		cout << "이 름: " << accArr[i].cusName << endl;
		cout << "잔 액: " << accArr[i].balance << endl;
		cout << endl;
	}

}