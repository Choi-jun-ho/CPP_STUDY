#ifndef __CUSTOMER_H__
#define __CUSTOMER_H__

class Customer
{
private:
	int accID;
	char * cusName;
	int balance;

public:
	Customer(int accID, const char * cusName, int balance);

	Customer(const Customer & ref);

	~Customer();

	int getAccID();

	char* getCusName();

	int getBalance();

	void plusBalance(int balance);

	void minBalance(int balance);

	void Show(void);

};

#endif