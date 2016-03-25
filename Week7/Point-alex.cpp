/******************************************
* **Author: Alexandra Permar
* **Date: November 4, 2015
* **Description: Week 6 HW - Project 6: Point.cpp
*******************************************/

//This is the beginning of Project 6: Point.cpp

#include "Point.hpp"
#include <cmath>


//Implementation of Point class (function definitions)
Point::Point()									//default constructor uses set functions to initialize xCoord, yCoord to 0.0
{
	setXCoord(0.0);
	setYCoord(0.0);
}

Point::Point(double x1, double y1)				//overloaded constructor passing 2 double parameters to set functions, initialize Point fields
{
	setXCoord(x1);
	setYCoord(y1);
}

void Point::setXCoord(double x1Param)
{
	xCoord = x1Param;
}

void Point::setYCoord(double y1Param)
{
	yCoord = y1Param;
}

double Point::getXCoord()							
{
	return xCoord;
}

double Point::getYCoord()							
{
	return yCoord;
}

double Point::distanceTo(const Point& pointObj)		//distanctTo function to calculate distance between two Point objects (endpoints on a line) using constant reference Point object
{
	double xDistance = pointObj.xCoord - xCoord;
	double yDistance = pointObj.yCoord - yCoord;
	return sqrt((pow(xDistance, 2.0) + pow(yDistance, 2.0)));
}
