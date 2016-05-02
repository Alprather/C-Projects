/*
 * By: Yannick Amegan
 * 11/2/15
 * -- LineSegment Class Interface --
 */

#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP

#include"Point.hpp"

class LineSegment{

    private:
	Point start;
	Point end;

    public:
	LineSegment(Point, Point);
	void setEnd1(Point);
	Point getEnd1();
	void setEnd2(Point);
	Point getEnd2();
	double length();
	double slope();
};
#endif
