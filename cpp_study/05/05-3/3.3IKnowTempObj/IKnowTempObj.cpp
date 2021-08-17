#include <iostream>

using namespace std;

class Temporary
{
private:
	int num;

public:
	Temporary(int n) : num(n)
	{
		cout << "create obj: " << num << endl;
	}

	~Temporary()
	{
		cout << "destroy obj" << endl;
	}

	void Show()
	{
		cout << "My num is " << this->num << endl;
	}
};

int main(void)
{
	Temporary(100);
	cout << "****** after make!" << endl << endl;

	Temporary(200).Show();
	cout << "****** after make!" << endl << endl;

	const Temporary &ref = Temporary(300);
	cout << "****** end of main!" << endl << endl;


	return 0;
}