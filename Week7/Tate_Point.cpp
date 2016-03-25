/*
 * Author: Benjamin Tate
 * Date: 11/4/2015
 * Description: Implementation of the Point class declared in Point.cpp
 */

#include<iostream>
#include<cmath>
#include"Point.hpp"

using namespace std;

// Sets default point coordinates to (0.0, 0.0)
Point::Point()
{
	xcoord = 0.0;
	ycoord = 0.0;
}
// Sets x and y coordinates
Point::Point(double x, double y)
{
	xcoord = x;
	ycoord = y;
}
// Sets x coordinate to x
void Point::setXCoord(double x)
{
	xcoord = x;
}
// Sets y coordinate to y
void Point::setYCoord(double y)
{
	ycoord = y;
}
// Returns x coordinate
double Point::getXCoord()
{
	return xcoord;
}
// Returns y coordinate
double Point::getYCoord()
{
	return ycoord;
}
// Calculates distance between x and y coordinates
double Point::distanceTo(Point p2)
{
	double ydist = p2.getYCoord() - ycoord;
	double xdist = p2.getXCoord() - xcoord;
	double dist = sqrt(
		abs(
			(pow(ydist, 2.0)) + 
			(pow(xdist, 2.0))
		)
	);
}





