/************************************************************
**Name: Alicia Prather
**Date: 04/11/2015
**Description: Contains points that represent 2 endpoints
***********************************************************/

#include <iostream>
#include <cmath>
#ifndef LINESEGMENT_H
#define LINESEGMENT_H
#include "Point.hpp"
using namespace std; 

class LineSegment
{ 
private:
	Point end1; //private point objects
	Point end2;
public: 
	LineSegment(Point, Point);
	void setEnd1(Point);
	void setEnd2(Point);
	Point getEnd1();
	Point getEnd2();
	double length(); //calculates distance using distanceTo
	double slope(); //calculates slope
};
#endif





