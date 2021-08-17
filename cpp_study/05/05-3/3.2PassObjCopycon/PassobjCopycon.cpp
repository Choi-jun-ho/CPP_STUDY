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

	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}

	void Show()
	{
		cout << "num: " << this->num << endl;
	}
};

SoSimple SimpleFunobj(SoSimple ob)
{
	cout << "return ÀÌÀü" << endl;
	return ob;
}

int main(void)
{
	SoSimple obj(7);
	SimpleFunobj(obj).AddNum(30).Show();
	obj.Show();

	return 0;
}