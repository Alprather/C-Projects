/******************************************
***Author: Alexandra Permar
***Date: November 4, 2015
***Description: Week 6 HW - Project 6: LineSegment.cpp
*******************************************/

//This is the beginning of Project 6: LineSegment.cpp

#include "LineSegment.hpp"

//Implementation of LineSegment class (function definitions)
	
LineSegment::LineSegment(Point end1, Point end2)		//default constructor passing 2 Point class objects to setEnd1 and setEnd2 for initialization
{
	setEnd1(end1);
	setEnd2(end2);
}

void LineSegment::setEnd1(Point end1Param)
{
	end1 = end1Param;
}

void LineSegment::setEnd2(Point end2Param)
{
	end2 = end2Param;
}

Point LineSegment::getEnd1()
{
	return end1;
}

Point LineSegment::getEnd2()
{
	return end2;
}

double LineSegment::length()						//calculate length of LineSegment using distanctTo function from Point class
{
	return end1.distanceTo(end2);
}

double LineSegment::slope()							//calculate slope of LineSegment with endpoint coordinates (x & y values) of 2 Point class objects end1 and end2
{
	return ((end2.getYCoord() - end1.getYCoord()) / (end2.getXCoord() - end1.getXCoord()));
}
