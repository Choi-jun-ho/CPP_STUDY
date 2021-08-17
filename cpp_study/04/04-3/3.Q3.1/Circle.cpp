#include <iostream>
#include "Circle.h"

using namespace std;

Circle::Circle(int x, int y, int rad)
	:center(x, y), radius(rad)
{
	// empty
}

void Circle::ShowInfo() const
{
	cout << "Inner Circle Info..." << endl;
	cout << "radius: " << radius << endl;
	center.ShowPointInfo();
}