#include <iostream>

namespace BestComImpl 
{
	void SimpleFunc(void) 
	{
		std::cout << "BestComp �Լ�" << std::endl;
	}
}

namespace ProgComImpl
{
	void SimpleFunc(void)
	{
		std::cout << "ProgComp �Լ�" << std::endl;
	}
}

int main(void) 
{
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();
	return 0;
}