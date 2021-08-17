#include <iostream>

namespace BestComImpl 
{
	void SimpleFunc(void) 
	{
		std::cout << "BestComp 함수" << std::endl;
	}
}

namespace ProgComImpl
{
	void SimpleFunc(void)
	{
		std::cout << "ProgComp 함수" << std::endl;
	}
}

int main(void) 
{
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();
	return 0;
}