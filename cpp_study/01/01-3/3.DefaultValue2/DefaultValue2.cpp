#include <iostream>

int Adder(int num1 = 1, int num2 = 2);// 디폴드 값은 함수의 선언부분만

int main(void)
{
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl;
	std::cout << Adder(3, 5) << std::endl;

	return 0;
}

// 함수의 정의
int Adder(int num1, int num2) {
	return num1 + num2;
}

