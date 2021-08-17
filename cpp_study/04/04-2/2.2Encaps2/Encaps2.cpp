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
