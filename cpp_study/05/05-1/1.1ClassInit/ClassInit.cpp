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

	cout << "���� �� �ʱ�ȭ ����" << endl;

	SoSimple sim2 = sim1; // SoSimple sim2(sim1) ���� ������ ��ȯ ������ explicit Ű���带 �̿��ϸ� ������ ��ȯ ������ �Ǽ� ��Ȯ�ϰ� ���� ����

	cout << "���� �� �ʱ�ȭ ����" << endl;

	sim2.ShowSimpleData();

	return 0;
}