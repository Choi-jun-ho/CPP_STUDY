#include "Ring.h"

void Ring::Init(int x1, int y1, int radius1, int x2, int y2, int radius2)
{
	ring1.Init(x1, y1, radius1);
	ring2.Init(x2, y2, radius2);
}

void Ring::ShowInfo() const
{
	ring1.ShowInfo();
	ring2.ShowInfo();
}