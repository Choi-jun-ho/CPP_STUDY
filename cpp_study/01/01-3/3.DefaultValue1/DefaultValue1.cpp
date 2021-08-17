#include <iostream>

int Adder(int num1 = 1, int num2 = 2) 
{
	return num1 + num2;
}

int main(void) 
{
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl;// 전달되는 인자는 왼쪽에서 부터 채워지고 부족한것은 디폴드 값으로 채워진다
	std::cout << Adder(3, 5) << std::endl;

	return 0;
}