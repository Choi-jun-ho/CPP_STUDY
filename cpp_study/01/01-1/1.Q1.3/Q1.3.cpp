#include <iostream>

int main(void)
{
	int num = 0;

	std::cout << "원하는 구구단을 입력 해주세영 : ";
	std::cin >> num;

	std::cout << "[  " << num << "단  ]" << std::endl;

	for (int i = 1; i < 10; i++) {
		std::cout << num << " × " << i << " = " << num * i << std::endl;
	}

	return 0;
}