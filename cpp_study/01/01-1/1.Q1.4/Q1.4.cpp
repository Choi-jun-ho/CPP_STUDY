//정답에는 int로 되어있지만 현실에는 float이 좋을거 같아서 float으로

#include <iostream>

float CalSalary(float sale_price) {
	return 50 + sale_price * 0.12;

}

int main(void)
{
	float sale_price = 0;

	while(true)
	{
		std::cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
		std::cin >> sale_price;

		if (sale_price == -1) {
			break;
		}

		std::cout << "이번달 급여: " << CalSalary(sale_price) << "만원" << std::endl;
	}

	std::cout << "프로그램을 종료합니다." << std::endl;

	return 0;
}