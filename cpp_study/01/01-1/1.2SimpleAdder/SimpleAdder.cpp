#include <iostream> // 키보드로부터의 데이터 입력에도 헤더파일 선언문이 필요함
int main(void)
{
	int val1;
	std::cout << "첫 번째 숫자 입력 : ";
	std::cin >> val1;
/*
	std::cin>>변수;
	데이터 입력도 데이터 출력과 마찬가지로 별도의 포맷 지정이 필요없다
	변수의 맞는 자료형이 입력된다
	실수형으로 바꾸고 싶으면 선언된 변수를 실수형으로 선언하면 됨
*/

	int val2;
	//c++은 구버전 c와 다르게 변수선언의 위치에 제한을 두지 않는다
	//ㄴ c++의 모든 컴파일러는 지역변수의 선언에 위치에 제한을 두지 않는다
	std::cout << "두 번째 숫자 입력 : ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "덧셈결과 : " << result << std::endl;

	return 0;
}