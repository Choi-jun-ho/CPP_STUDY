#include <iostream>

using namespace std;

class SininvelCap // Äà¹° Ã³Ä¡¿ë Ä¸½¶
{
public:
	void Take() const {
		cout << "Äà¹°ÀÌ ½Ï~ ³³´Ï´Ù" << endl;
	}
};

class SneezeCap // ÀçÃ¤±â Ã³Ä¡¿ë Ä¸½¶
{
public:
	void Take() const {
		cout << "ÀçÃ¤±â°¡ ¸Ü½À´Ï´Ù" << endl;
	}
};

class SuffleCap // ÄÚ¸·Èû Ã³Ä¡¿ë Ä¸½¶
{
public:
	void Take() const {
		cout << "ÄÚ°¡ »½ ¶Õ¸³´Ï´Ù" << endl;
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
