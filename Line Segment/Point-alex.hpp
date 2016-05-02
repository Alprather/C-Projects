/******************************************
* **Author: Alexandra Permar
* **Date: November 4, 2015
* **Description: Week 6 HW - Project 6: Point.hpp
*******************************************/

//This is the beginning of Project 6: Point.hpp

#ifndef POINT_HPP
#define POINT_HPP

class Point
{

	//Defines interface of Point class (class declaration)
	
	private:
		double xCoord, yCoord;

	public:
		Point();								//default constructor (initializing 2 set functions to 0.0 in Point.cpp)
		
		Point(double, double);					//overloaded constructor w/ 2 parameters

		void setXCoord(double);
		void setYCoord(double);
		double distanceTo(const Point&);
		double getXCoord();
		double getYCoord();


};
#endif


