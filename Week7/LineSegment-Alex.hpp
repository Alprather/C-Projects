#pragma once
/******************************************
* **Author: Alexandra Permar
* **Date: November 4, 2015
* **Description: Week 6 HW - Project 6: LineSegment.hpp
*******************************************/

//This is the beginning of Project 6: LineSegment.hpp

#ifndef LINESEGMENT_HPP
#define LINESEGMENT_HPP

#include "Point.hpp"
#include <string>

//Defines interface of LineSegment class (class declaration)
class LineSegment
{

private:
	Point end1, end2;
	
public:
	LineSegment(Point, Point);					//default constructor w/ 2 Point class parameters

	void setEnd1(Point);						
	void setEnd2(Point);
	Point getEnd1();							//note: Point class return type for getEnd functions
	Point getEnd2();
	double length();
	double slope();


};
#endif
