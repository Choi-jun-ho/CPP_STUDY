#include <iostream>

int main(void)
{
	int num = 0;

	std::cout << "���ϴ� �������� �Է� ���ּ��� : ";
	std::cin >> num;

	std::cout << "[  " << num << "��  ]" << std::endl;

	for (int i = 1; i < 10; i++) {
		std::cout << num << " �� " << i << " = " << num * i << std::endl;
	}

	return 0;
}