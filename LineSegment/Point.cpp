/************************************************************
**Name: Alicia Prather
**Date: 04/11/2015
**Description: Contains x, y coordinates for a point
***********************************************************/
#include <iostream>
#include <cmath>
#include "Point.hpp"
using namespace std;


/***********************************************
 * ** 		Point::Point
 * ** Default constructor, sets coords to 1
 * ********************************************/
Point::Point()
{
	setXCoord(1);
	setYCoord(1);
}
/**********************************************
 * ** 		Point::Point
 * ** Constructor takes coordinates and passes
 * ** them to set functions
 * *******************************************/
Point::Point(double xIn, double yIn)
{
	setXCoord(xIn);
	setYCoord(yIn);
}

/*********************************************
 * **		Point::setx
 * ** Sets x coordinate
 * ******************************************/
void Point::setXCoord(double xIn)
{
	x = xIn;
}

/*******************************************
 * ** 		Point::sety
 * ** Sets y coordinate
 * *****************************************/
void Point::setYCoord(double yIn)
{
	y = yIn;
}

/********************************************
 * **		Point::getx
 * ** gets x constant coordiante
 * *****************************************/
double Point::getXCoord()
{
	return x; 
}

/*********************************************
 * **		Point::gety
 * ** gety constant cooridnate
 * ******************************************/
double Point::getYCoord()
{
	return y;
}

/********************************************
 * **		Point::distanceTo
 * ** calculates distance between 2 points
 * *****************************************/
double Point::distanceTo(const Point &pt2)   
{
	double dist = sqrt((x-pt2.x)*(x-pt2.x)+(y-pt2.y)*(y-pt2.y)); 
	
	return dist; 
}
