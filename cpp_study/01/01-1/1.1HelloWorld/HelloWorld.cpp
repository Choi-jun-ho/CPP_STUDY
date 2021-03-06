#include <iostream>
/*	
	1. 헤더파일 선언문 #include <iostream>
		iostream : 입출력을 위한 std, cout, endl을 사용하기 위한 헤더 파일
		c++ 헤더 파일 확장자는 프로그래머가 정의하는 헤더파일의 선언이 아닌, 표준 헤더파일의 선언에서는 확장자를 생략하기로 약속 되어 있음
		iostream.h는 과거 표준 입출력 라이브러리 -> 점차 지원하지 않음
		iostrea은 새로운 표준 입출력 라이브러리
*/

int main(void) 
{
	int num = 20;
	std::cout << "Hello World!" << std::endl;
	std::cout << "Hello " << "World!" << std::endl;
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;
/*
	2. std::cout << 출력대상; 
		출력 대상에는 무엇이든 올 수 있음d
	3. <<연산자를 이용한 출력 대상의 연이은 표현과 개행
		<<연산자는 둘 이상의 출력 대상을 연이어 출력 할 수 있게 해줌 > 스페이스바 안붙이고 이어서 출력
		<< std::endl; <<연산자를 이용한 std::end의 출력은 개행으로 이어짐
*/

	return 0;
}