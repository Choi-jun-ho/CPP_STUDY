/*
참조자 
int a = 123;
int &b = a; // 참조자 선언
참조자란 변수를 참조하여 변수처럼 사용할 수 있게 만드는 것
즉 위에 보았을때 메모리에 a 123이 할당되어있을때 b도 123을 같이 할당하는 것을 말한다
즉 a로 14로 바꾸면 b도 14로 바뀌고 역도 마찮가지

참조자는 별칭이다.
참조자의 수에는 제한이 없으며 참조자를 대상으로도 참조자를 선언할 수 있다

참조자의 선언 가능 범위
참조자는 변수에 대해서만 선언이 가능하고 선언됨과 동시에 누군가를 참조해야만 한다
int &ref=20; 불가
상수와 미리 참조자 선언불가
int &ref; 불가
NULL 초기화 불가
int &ref=NULL; 불가
*/

#include <iostream>

using namespace std;

int main(void) 
{
	int num1 = 1020;
	int &num2 = num1;

	num2 = 3047;

	cout << "VAL: " << num1 << endl;
	cout << "REF: " << num2 << endl;

	cout << "VAL: " << &num1 << endl;
	cout << "REF: " << &num2 << endl;

	return 0;
}