#include <iostream>

template <typename T>// ���߿� ������� �̸����ϸ� �ڷ����� ����

inline int SQUARE(T x)
{
	return x * x;
}

int main(void)
{
	std::cout << SQUARE(5) << std::endl;
	std::cout << SQUARE(12) << std::endl;

	return 0;
}