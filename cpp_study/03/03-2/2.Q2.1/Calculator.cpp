#include <iostream>
#include "Calculator.h"

using namespace std;

void Calculator::Init()
{
	add_Num = 0; // ´õÇÏ±â È½¼ö
	min_Num = 0; // »©±â È½¼ö
	mul_Num = 0; // °öÇÏ±â È½¼ö
	div_Num = 0; // ³ª´©±â È½¼ö
}

void Calculator::ShowOpCount() 
{
	cout << "µ¡¼À: " << add_Num;
	cout << " »¬¼À: " << min_Num;
	cout << " °ö¼À: " << mul_Num;
	cout << " ³ª´°¼À: " << div_Num << endl;	
}

//´õÇÏ±â
double Calculator::Add(double a, double b)
{
	add_Num += 1;
	return a + b;
}

//»©±â
double Calculator::Min(double a, double b)
{
	min_Num += 1;
	return a - b;
}

//°öÇÏ±â
double Calculator::Mul(double a, double b)
{
	mul_Num += 1;
	return a * b;
}

//³ª´©±â
double Calculator::Div(double a, double b)
{
	div_Num += 1;
	return a / b;
}
