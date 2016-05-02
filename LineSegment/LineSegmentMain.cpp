
/************************************************************
**Name: Alicia Prather
**Date : 04 / 11 / 2015
* *Description : Contains points that represent 2 endpoints
***********************************************************/
#include <iostream>
#include <cmath>
#include "Point.hpp"
#include "LineSegment.hpp"
using namespace std;

int main()
{
	Point p1(10, 8);
	Point p2(5, 4.0);
	LineSegment ls1(p1, p2);
	double dist = p1.distanceTo(p2);
	
	cout << "point p1x:" << p1.getXCoord() << "pointp1y:" << p1.getYCoord()<<endl;
	cout << "pointp2x" << p2.getXCoord() << "pointp2y:" << p2.getYCoord() << endl;
	cout << "Distance p1-p2:" << dist << endl;
	cout << "Distance of line segment 1: " << ls1.length() << endl; 
	cout << "Slope of line segment 1: " << ls1.slope() << endl; 
	return 0;
}
