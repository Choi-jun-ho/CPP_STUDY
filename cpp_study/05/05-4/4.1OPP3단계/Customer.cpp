#include <iostream>
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
	cout << "����ID: " << this->accID << endl;
	cout << "�� ��: " << this->cusName << endl;
	cout << "�� ��: " << this->balance << endl;
	cout << endl;
}