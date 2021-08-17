#include <iostream>

using namespace std;

class SoSimple
{
private:
	int num;

public:
	SoSimple(int n) : num(n)
	{

	}

	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}

	void ShowData() const
	{
		cout << "num: " << num << endl;
	}
};

int main(void)
{
	const SoSimple obj(7);
	//obj.AddNum(20); // 오류 이유 const SoSimple obj(7);의 const는 이 객체의 데이터 변경을 허용하지 않겠다라는 선언이기 때문에
	obj.ShowData();
}