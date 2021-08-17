#ifndef __POINT_H__
#define __POINT_H__

class Point
{
private:
	int xpos;
	int ypos;

public:
	Point(int x, int y);
	void ShowPointInfo() const;
};


#endif