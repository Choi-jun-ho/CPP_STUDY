#include <iostream>

using namespace std;

class SoSimple
{
private:
	int num;

public:
	SoSimple(int n) : num(n)
	{

	}

	SoSimple(const SoSimple & copy) : num(copy.num)
	{
		cout << "Called SoSimple(cont SoSimple& copy)" << endl;
	}

	void Show()
	{
		cout << "num: " << this->num << endl;
	}
};

void SimpleFunobj(SoSimple ob)
{
	ob.Show();
}
int main(void)
{
	SoSimple obj(7);
	cout << "�Լ�ȣ�� ��" << endl;
	SimpleFunobj(obj);
	cout << "�Լ�ȣ�� ��" << endl;

	return 0;
}