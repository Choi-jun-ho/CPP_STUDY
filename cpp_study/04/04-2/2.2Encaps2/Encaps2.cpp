#include <iostream>

using namespace std;

class SininvelCap // �๰ óġ�� ĸ��
{
public:
	void Take() const {
		cout << "�๰�� ��~ ���ϴ�" << endl;
	}
};

class SneezeCap // ��ä�� óġ�� ĸ��
{
public:
	void Take() const {
		cout << "��ä�Ⱑ �ܽ��ϴ�" << endl;
	}
};

class SuffleCap // �ڸ��� óġ�� ĸ��
{
public:
	void Take() const {
		cout << "�ڰ� �� �ո��ϴ�" << endl;
	}
};

class CONTAC600
{
private:
	SininvelCap sin;
	SneezeCap sne;
	SuffleCap suf;

public:
	void Take() const
	{
		sin.Take();
		sne.Take();
		suf.Take();
	}
};

class ColdPatient
{
public:
	void TakeCONTAC600(const CONTAC600 &cap) const
	{
		cap.Take();
	}
};

int main(void)
{
	CONTAC600 cap;
	ColdPatient sufferer;
	sufferer.TakeCONTAC600(cap);


	return 0;
}
