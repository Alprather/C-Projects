
/************************************************************
**Name: Alicia Prather
**Date: 04/11/2015
**Description: Contains X, Y coordinates for a point
***********************************************************/

#include <iostream>
#include <cmath>
#ifndef POINT_H
#define POINT_H
using namespace std; 

class Point
{ 
private: 
	double x;  //private variables
	double y;

public: 
	Point(); //public functions
	Point(double, double);
	double getXCoord();
	double getYCoord(); 
	void setXCoord(double);
	void setYCoord(double);
	double distanceTo(const Point&); //calculates distance

};
#endif

