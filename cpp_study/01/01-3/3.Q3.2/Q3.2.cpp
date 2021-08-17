#include <iostream>

int SimpleFunc(int a = 10)
{
	return a + 1;
}

int SimpleFunc()
{
	return 10;
}

int main(void)
{
	SimpleFunc();//오류 발생 이유 : 두개다 조건이 만족하기 때문에 컴퓨터가 어떤것을 선택할지 모호함

	return 0;
}