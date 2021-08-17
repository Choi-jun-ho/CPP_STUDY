#include <iostream>
#include <cstring>
#include "Printer.h"

using namespace std;

void Printer::SetString(const char * c)
{
	strcpy_s(str, sizeof(str), c);
}

void Printer::ShowString()
{
	cout << str << endl;
}