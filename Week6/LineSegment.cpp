/************************************************************
**Name: Alicia Prather
**Date: 04/11/2015
**Description: Contains points that represent 2 endpoints
***********************************************************/
#include <iostream>
#include <cmath>
#include "LineSegment.hpp"
#include "Point.hpp"
using namespace std;

/***************************************************
 * ** 		LineSegment::LineSegment
 * ** Constructor to set endpoints. 
 * ************************************************/
LineSegment::LineSegment(Point coordsp1, Point coordsp2)
{
	setEnd1(coordsp1);
	setEnd2(coordsp2);
}

/***************************************************
 * **		LineSegment::setEnd1
 * ** sets the first endpoint. 
 * **********************************************/ 
void LineSegment::setEnd1(Point coordsp1)
{
	end1 = coordsp1;
}

/***************************************************
 * **		LineSegment::setEnd2
 * ** Sets second endpoint
 * ************************************************/
void LineSegment::setEnd2(Point coordsp2)
{
	end2 = coordsp2; 
}

/**************************************************
 * **		LineSegment::getEnd1()
 * ** Gets first endpoint
 * ************************************************/
Point LineSegment::getEnd1()
{
	return end1;
}

/*****************************************************
 * **		LineSegment::getEnd2()
 * ** Gets second endpoint
 * ************************************************/
Point LineSegment::getEnd2()
{
	return end2;
}

/*************************************************
 * ** 		LineSegment::length
 * ** Caclulates the length of the line segment
 * **********************************************/
double LineSegment::length()
{
	double l = end1.distanceTo(end2);
	return l; 
}

/***************************************************
 * **	LineSegment::slope
 * ** Calculates the slope of the lie segnment
 * ***********************************************/
double LineSegment::slope()
{
	double slope =(end1.getYCoord()-end2.getYCoord())/
			(end1.getXCoord()-end2.getXCoord()); 

	return slope; 
}

