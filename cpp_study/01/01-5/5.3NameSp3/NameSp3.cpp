#include <iostream>

namespace BestComImpl
{
	void SimpleFunc(void);

	namespace SubOne
	{
		void SimpleFunc(void);
	}
}

namespace BestComImpl 
{
	void PrettyFunc(void);
}

namespace ProgComImpl
{
	void SimpleFunc(void);
}

int main(void) {

	BestComImpl::SimpleFunc();

	return 0;
}

void BestComImpl::SimpleFunc(void)
{
	std::cout << "BestCom�� ������ �Լ�" << std::endl;
	PrettyFunc(); // ���� �̸�����
	ProgComImpl::SimpleFunc(); // �ٸ� �̸�����
	SubOne::SimpleFunc();
}

void BestComImpl::PrettyFunc(void)
{
	std::cout << "So Pretty!!" << std::endl;
}

void BestComImpl::SubOne::SimpleFunc(void) {
	std::cout << "Best Sub One" << std::endl;
}

void ProgComImpl::SimpleFunc(void) 
{
	std::cout << "ProgCom�� ������ �Լ�" << std::endl;
}