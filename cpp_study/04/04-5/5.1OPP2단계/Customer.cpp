#include <iostream>
#include "Customer.h"

using namespace std;

Customer::Customer(int accID, const char * cusName, int balance)
{
	this->accID = accID;
	this->cusName = new char[strlen(cusName)+1];
	strcpy_s(this->cusName, _msize(this->cusName), cusName);
	this->balance = balance;
}

int Customer::getAccID()
{
	return this->accID;
}

char* Customer::getCusName()
{
	return this->cusName;
}

int Customer::getBalance()
{
	return this->balance;
}

void Customer::plusBalance(int balance)
{
	this->balance += balance;
}

void Customer::minBalance(int balance)
{
	this->balance -= balance;
}

void Customer::Show(void)
{
	cout << "°èÁÂID: " << this->accID << endl;
	cout << "ÀÌ ¸§: " << this->cusName << endl;
	cout << "ÀÜ ¾×: " << this->balance << endl;
	cout << endl;
}

Customer::~Customer()
{
	delete cusName;
}