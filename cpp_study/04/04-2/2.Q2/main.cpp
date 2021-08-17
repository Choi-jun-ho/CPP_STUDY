#include <iostream>
#include "Ring.h"

using namespace std;

int main(void)
{
	Ring ring;
	ring.Init(1, 1, 4, 2, 2, 9);
	ring.ShowInfo();
	
	return 0;
}