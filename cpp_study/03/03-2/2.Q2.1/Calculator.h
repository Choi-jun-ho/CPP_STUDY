#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__

class Calculator
{
private:
	int add_Num; // ���ϱ� Ƚ��
	int min_Num; // ���� Ƚ��
	int mul_Num; // ���ϱ� Ƚ��
	int div_Num; // ������ Ƚ��

public:
	void Init();
	void ShowOpCount();
	double Add(double a, double b);
	double Min(double a, double b);
	double Mul(double a, double b);
	double Div(double a, double b);
};

#endif