#include <iostream>

template <typename T>// 나중에 배우지만 미리말하면 자료형의 묶음

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