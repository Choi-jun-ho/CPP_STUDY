#ifndef __BANK_H__
#define __BANK_H__

#include "Customer.h"

class Bank
{
private:
	enum
	{
		MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT
	};

	Customer * cus[100];
	int accNum;

	void ShowMenu(void);
	void MakeAccount(void);
	void DepositMoney(void);
	void WithdrawMoney(void);
	void ShowAllAccInfo(void);
	void Exit(void);


public:
	~Bank(void);
	Bank(void);
	void Run(void);
};

#endif