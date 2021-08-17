#include <iostream>

using namespace std;

class SoSimple
{
private:
	int num1;
	int num2;

public:
	SoSimple(int num1, int num2)
		:num1(num1), num2(num2)
	{
		// empty
	}

	SoSimple(const SoSimple &copy)
		:num1(copy.num1), num2(copy.num2)
	{
		cout << "Called SoSimple(SoSimple &copy)" << endl;
	}

	void ShowSimpleData()
	{
		cout << num1 << endl << num2 << endl;
	}
};

int main(void)
{
	SoSimple sim1(15, 30);

	cout << "생성 및 초기화 직전" << endl;

	SoSimple sim2 = sim1; // SoSimple sim2(sim1) 으로 묵시적 변환 하지만 explicit 키워드를 이용하면 묵시적 변환 제한이 되서 명확하게 인지 가능

	cout << "생성 및 초기화 직후" << endl;

	sim2.ShowSimpleData();

	return 0;
}