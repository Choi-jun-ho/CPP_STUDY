#include <iostream>
#include "PermanentWorker.h"

using namespace std;

PermanentWorker::PermanentWorker(const char * name, int money)
	: salary(money)
{
	strcpy_s(this->name, sizeof(this->name), name);
}

int PermanentWorker::GetPay() const
{
	return salary;
}

void PermanentWorker::ShowSalaryInfo() const
{
	cout << "name: " << name << endl;
	cout << "salary: " << GetPay() << endl << endl;
}