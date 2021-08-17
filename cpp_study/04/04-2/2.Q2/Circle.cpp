#include <iostream>
#include "Circle.h"

using namespace std;

void Circle::Init(int x, int y, int rad)
{
	center.Init(x, y);
	radius = rad;
}

void Circle::ShowInfo() const
{
	cout << "Inner Circle Info..." << endl;
	cout << "radius: " << radius << endl;
	center.ShowPointInfo();
}