//���信�� int�� �Ǿ������� ���ǿ��� float�� ������ ���Ƽ� float����

#include <iostream>

float CalSalary(float sale_price) {
	return 50 + sale_price * 0.12;

}

int main(void)
{
	float sale_price = 0;

	while(true)
	{
		std::cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		std::cin >> sale_price;

		if (sale_price == -1) {
			break;
		}

		std::cout << "�̹��� �޿�: " << CalSalary(sale_price) << "����" << std::endl;
	}

	std::cout << "���α׷��� �����մϴ�." << std::endl;

	return 0;
}