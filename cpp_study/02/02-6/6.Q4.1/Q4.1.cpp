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

	cout << strcmp(b, c) << "���ڿ� ����" << endl;

	cout << strcmp(b, c2) << "���ڿ� Ʋ��" << endl;

	strcat_s(b, c2);

	cout << b << endl;

	cout << "b ���ڿ� ���� : " << strlen(b) << endl;

	return 0;
}