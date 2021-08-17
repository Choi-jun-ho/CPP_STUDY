#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__

class Calculator
{
private:
	int add_Num; // ´õÇÏ±â È½¼ö
	int min_Num; // »©±â È½¼ö
	int mul_Num; // °öÇÏ±â È½¼ö
	int div_Num; // ³ª´©±â È½¼ö

public:
	void Init();
	void ShowOpCount();
	double Add(double a, double b);
	double Min(double a, double b);
	double Mul(double a, double b);
	double Div(double a, double b);
};

#endif