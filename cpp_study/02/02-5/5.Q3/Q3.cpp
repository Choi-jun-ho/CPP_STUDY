#include <iostream>

using namespace std;

typedef struct __Point
{
	int xpos;
	int ypos;
} Point;

Point& PntAdder(const Point &p1, const Point &p2) {

	Point *p = new Point;
	p->xpos = p1.xpos + p2.xpos;
	p->ypos = p1.ypos + p2.ypos;

	return *p;
}

int main(void)
{
	Point *p1 = new Point;
	p1->xpos = 3;
	p1->ypos = 4;

	Point *p2 = new Point;
	p2->xpos = 7;
	p2->ypos = 6;

	Point &point = PntAdder(*p1, *p2);
	
	cout << "[ " << point.xpos << " , " << point.ypos << " ]" << endl;

	delete p1;
	delete p2;
	delete &point;


	return 0;
}