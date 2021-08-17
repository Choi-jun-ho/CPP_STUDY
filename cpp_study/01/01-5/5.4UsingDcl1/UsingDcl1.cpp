#include <iostream>

namespace Hybird
{
	void HybFunc(void)
	{
		std::cout << "So simple function" << std::endl;
		std::cout << "In namespace hybird!" << std::endl;
	}
}

int main(void)
{
	using Hybird::HybFunc;// unsing 네이스페이스이름::해당항목; 이용하면 해당항목은 Hybird::를 안써도 바로써짐
	HybFunc();

	return 0;
}