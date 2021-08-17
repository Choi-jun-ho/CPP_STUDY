#include <iostream>
#include <cstring>
#include "Customer.h"

using namespace std;

Customer::Customer(int accID, const char * cusName, int balance)
{
	this->accID = accID;
	this->cusName = new char[strlen(cusName) + 1];
	strcpy_s(this->cusName, _msize(this->cusName), cusName);
	this->balance = balance;
}

Customer::Customer(const Customer & ref)
	:accID(ref.accID), balance(ref.balance)
{
	this->cusName = new char[strlen(ref.cusName) + 1];
	strcpy_s(this->cusName, _msize(this->cusName), ref.cusName);
}

Customer::~Customer()
{
	delete cusName;
}

int Customer::getAccID() const
{
	return this->accID;
}

char* Customer::getCusName() const
{
	return this->cusName;
}

int Customer::getBalance() const
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

void Customer::Show(void) const
{
	cout << "����ID: " << this->accID << endl;
	cout << "�� ��: " << this->cusName << endl;
	cout << "�� ��: " << this->balance << endl;
	cout << endl;
}