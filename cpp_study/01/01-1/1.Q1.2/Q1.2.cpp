#include <iostream>

int main(void) 
{
	char name[50];
	char phoneNum[20];

	std::cout << "�̸��� �����ΰ���? : ";
	std::cin >> name;

	std::cout << "��ȭ��ȣ�� �˷��ټ� �־��? : ";
	std::cin >> phoneNum;

	std::cout << "���� �̸��� " << name << "�̰��\n";
	std::cout << "�� ��ȣ�� " << phoneNum << "�̿���" << std::endl;

	return 0;
}