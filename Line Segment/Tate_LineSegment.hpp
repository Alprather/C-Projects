/*
 * Author: Benjamin Tate
 * Date: 11/4/2015
 * Description: A class that will find the length and slope of a line segment between two points.
 */

#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP

#include "Point.hpp"

// Declaration of LineSegment class
class LineSegment
{
	private:
		Point point1;
		Point point2;

	public:
		LineSegment(Point, Point);
		void setEnd1(Point);
		void setEnd2(Point);
		Point getEnd1();
		Point getEnd2();
		double length();
		double slope();
};

#endif






