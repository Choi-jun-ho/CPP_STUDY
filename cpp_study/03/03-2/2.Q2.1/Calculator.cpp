#include <iostream>
#include "Calculator.h"

using namespace std;

void Calculator::Init()
{
	add_Num = 0; // ���ϱ� Ƚ��
	min_Num = 0; // ���� Ƚ��
	mul_Num = 0; // ���ϱ� Ƚ��
	div_Num = 0; // ������ Ƚ��
}

void Calculator::ShowOpCount() 
{
	cout << "����: " << add_Num;
	cout << " ����: " << min_Num;
	cout << " ����: " << mul_Num;
	cout << " ������: " << div_Num << endl;	
}

//���ϱ�
double Calculator::Add(double a, double b)
{
	add_Num += 1;
	return a + b;
}

//����
double Calculator::Min(double a, double b)
{
	min_Num += 1;
	return a - b;
}

//���ϱ�
double Calculator::Mul(double a, double b)
{
	mul_Num += 1;
	return a * b;
}

//������
double Calculator::Div(double a, double b)
{
	div_Num += 1;
	return a / b;
}
