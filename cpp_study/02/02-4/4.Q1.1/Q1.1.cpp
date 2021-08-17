#include <iostream>

using namespace std;

void ref_int_plus1(int &var) {
	var++;
}

void ref_int_sign_replace(int &var) {
	var *= -1;
}

int main(void)
{
	int a = 9;

	cout << "a : " << a << endl;

	ref_int_plus1(a);

	cout << "a : " << a << endl;

	ref_int_sign_replace(a);

	cout << "a : " << a << endl;
	

	return 0;
}