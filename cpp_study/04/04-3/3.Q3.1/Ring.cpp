#include "Ring.h"

Ring::Ring(int x1, int y1, int radius1, int x2, int y2, int radius2)
	:ring1(x1, y1, radius1), ring2(x2, y2, radius2)
{
	//empty
}

void Ring::ShowInfo() const
{
	ring1.ShowInfo();
	ring2.ShowInfo();
}