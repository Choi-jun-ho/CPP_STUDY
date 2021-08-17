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

	int getAccID() const;

	char* getCusName() const;

	int getBalance() const;

	void plusBalance(int balance);

	void minBalance(int balance);

	void Show(void) const;

};

#endif