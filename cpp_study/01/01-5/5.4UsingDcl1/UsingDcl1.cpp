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
	using Hybird::HybFunc;// unsing ���̽����̽��̸�::�ش��׸�; �̿��ϸ� �ش��׸��� Hybird::�� �Ƚᵵ �ٷν���
	HybFunc();

	return 0;
}