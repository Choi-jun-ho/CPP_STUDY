#ifndef __RING_H__
#define __RING_H__
#include "Circle.h"

class Ring
{
private:
	Circle ring1;
	Circle ring2;

public:
	Ring(int x, int y, int radius, int x2, int y2, int radius2);
	void ShowInfo() const;
};


#endif