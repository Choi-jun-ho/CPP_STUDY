#pragma once
#ifndef __CIRCLE_H__
#define __CIRCLE_H__

#include "Point.h"

class Circle
{
private:
	Point center;
	int radius;

public:
	Circle(int x, int y, int radius);
	void ShowInfo() const;
};

#endif