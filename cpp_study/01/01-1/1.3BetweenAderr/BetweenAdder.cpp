#include <iostream>

int main(void)
{
	int val1, val2;
	int result = 0;
	std::cout << "두 개의 숫자 입력 : ";
	std::cin >> val1 >> val2; 
	// std::cin>>변수1>>변수2;로 연속적인 데이터 입력 가능, 
	//변수간의 경계는 탭, 스페이스바, Enter 키의 입력과 같은 공백으로 이루어짐

	if (val1 < val2)
	{
		for (int i = val1 + 1; i < val2; i++) // for 내 int 함수 선언 가능 
		{
			result += i;

		}
	}
	else
	{
		for (int i = val2 + 1; i < val1; i++) {
			result += i;
		}
	}

	std::cout << "두 수 사이의 합 : " << result << std::endl;



	return 0;
}