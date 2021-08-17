#include <iostream>
#include <cstring>
#include "NameCard.h"

using namespace std;

NameCard::NameCard(const char * named, const char * company, const char * phone, int ranking)
{
	name = new char[strlen(named) + 1];
	companyName = new char[strlen(company) + 1];
	phoneNum = new char[strlen(phone) + 1];

	strcpy_s(name, _msize(name), named);
	strcpy_s(companyName, _msize(companyName), company);
	strcpy_s(phoneNum, _msize(phoneNum), phone);
	rank = ranking;
}
void NameCard::ShowNameCardInfo() const
{
	cout << "이름: " << name << endl;
	cout << "회사: " << companyName << endl;
	cout << "전화번호: " << phoneNum << endl;
	cout << "직급: ";

	if (rank == COMP_POS::CLERK)
		cout << "사원" << endl;
	else if (rank == COMP_POS::SENIOR)
		cout << "주임" << endl;
	else if (rank == COMP_POS::ASSIST)
		cout << "대리" << endl;
	else if (rank == COMP_POS::MANAGER)
		cout << "과장" << endl;
	cout << endl;
}

NameCard::~NameCard() 
{
	delete[] name;
	delete[] companyName;
	delete[] phoneNum;
}