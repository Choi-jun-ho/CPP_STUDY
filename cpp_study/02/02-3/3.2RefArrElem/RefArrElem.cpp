#include <iostream>

using namespace std;

int main(void)
{
	int arr[3] = { 1, 3, 5 };
	int(&ref0)[3] = arr;
	int &ref1 = arr[0];
	int &ref2 = arr[1];
	int &ref3 = arr[2];

	cout << *(arr+1) << endl;
	cout << *(ref0+1) << endl;
	cout << ref1 << endl;
	cout << ref2 << endl;
	cout << ref3 << endl;

	return 0;
}