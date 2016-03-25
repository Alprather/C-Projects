/*
 * Author: Benjamin Tate
 * Date: 11/4/2015
 * Description: Implementation of the LineSegment class defined in LineSegment.cpp
 */

#include <iostream>
#include <cmath>

#include "Point.hpp"
#include "LineSegment.hpp"

using namespace std;


LineSegment::LineSegment(Point point1In, Point point2In)
{
	point1 = point1In;
	point2 = point2In;	
}

void LineSegment::setEnd1(Point point1In)
{
	point1 = point1In;
}

void LineSegment::setEnd2(Point point2In)
{
	point2 = point2In;
}

Point LineSegment::getEnd1()
{
	return point1;
}

Point LineSegment::getEnd2()
{
	return point2;
}

double LineSegment::length()
{
	double length = point1.distanceTo(point2);
	return length;
}


double LineSegment::slope()
{
	double slope = 
		(point2.getYCoord() - point1.getYCoord()) / 
		(point2.getXCoord() - point1.getXCoord());
	return slope;
}
