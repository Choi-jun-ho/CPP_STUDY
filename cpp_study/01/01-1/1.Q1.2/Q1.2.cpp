#include <iostream>

int main(void) 
{
	char name[50];
	char phoneNum[20];

	std::cout << "이름이 무엇인가요? : ";
	std::cin >> name;

	std::cout << "전화번호좀 알려줄수 있어요? : ";
	std::cin >> phoneNum;

	std::cout << "저의 이름은 " << name << "이고요\n";
	std::cout << "폰 번호는 " << phoneNum << "이에요" << std::endl;

	return 0;
}