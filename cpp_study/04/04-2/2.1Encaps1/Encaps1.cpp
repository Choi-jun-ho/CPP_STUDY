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

class ColdPatient
{
public:
	void TakeSininvelCap(const SininvelCap & cap) const { cap.Take(); }
	void TakeSneezeCap(const SneezeCap & cap) const { cap.Take(); }
	void TakeSuffleCap(const SuffleCap & cap) const { cap.Take(); }
};

int main(void)
{
	SininvelCap scap;
	SneezeCap zcap;
	SuffleCap ncap;

	ColdPatient sufferer;
	sufferer.TakeSininvelCap(scap);
	sufferer.TakeSneezeCap(zcap);
	sufferer.TakeSuffleCap(ncap);

	return 0;
}
