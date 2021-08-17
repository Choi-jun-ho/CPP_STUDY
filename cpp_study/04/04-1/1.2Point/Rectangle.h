#ifndef __RACTANGLE_H__
#define __RACTANGLE_H__

#include "Point.h"

class Rectangle
{
private:
	Point upLeft;
	Point lowRight;

public:
	bool InitMembers(const Point &ul, const Point &lr);
	void ShowRectInfo() const;
};

#endif