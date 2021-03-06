#include <iostream>
#include <cstring>

using namespace std;

class Person
{
private:
	char * name;
	int age;

public:
	Person(const char * myname, int myage)
		:age(myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy_s(name, _msize(name), myname);
	}

	Person(Person &copy)
		:age(copy.age)
	{
		name = new char[strlen(copy.name) + 1];
		strcpy_s(name, _msize(name), copy.name);
	}	

	void ShowPersonInfo() const
	{
		cout << "?̸?: " << name << endl;
		cout << "????: " << age << endl;
	}

	~Person()
	{
		delete[] name;
		cout << "called destructor!" << endl;
	}
};

int main(void)
{
	Person man1("Lee dong woo", 29);
	Person man2 = man1;
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();

	return 0;
}