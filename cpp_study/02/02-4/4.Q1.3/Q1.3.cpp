#include <iostream>

using namespace std;

void SwapPointer(int *(&ptr1), int *(&ptr2))
{
	int * temp = ptr1; //&num1
	ptr1 = ptr2;//&num2
	ptr2 = temp;//&num1
}

int main(void) {

	int num1 = 5;
	int *ptr1 = &num1;

	int num2 = 10;
	int *ptr2 = &num2;

	cout << "num1 : " << num1 << "/   num2 : " << num2 << endl;
	cout << "*ptr1 : " << *ptr1 << "/   *ptr2 : " << *ptr2 << endl;
	cout << "ptr1 : " << ptr1 << "/   ptr2 : " << ptr2 << endl;

	SwapPointer(ptr1, ptr2);

	cout << "SwapPointer...." << endl;
	cout << "num1 : " << num1 << "/   num2 : " << num2 << endl;
	cout << "*ptr1 : " << *ptr1 << "/   *ptr2 : " << *ptr2 << endl;
	cout << "ptr1 : " << ptr1 << "/   ptr2 : " << ptr2 << endl;
	

	return 0;
}