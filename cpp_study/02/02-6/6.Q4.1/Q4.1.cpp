#include <iostream>
#include <cstring>

using namespace std;

int main(void)
{
	
	char c[] = "Hello~ ";
	char c2[] = "World!";
	char b[20];

	strcpy_s(b, sizeof(b), c);

	cout << b << endl;

	cout << strcmp(b, c) << "문자열 같음" << endl;

	cout << strcmp(b, c2) << "문자열 틀림" << endl;

	strcat_s(b, c2);

	cout << b << endl;

	cout << "b 문자열 길이 : " << strlen(b) << endl;

	return 0;
}