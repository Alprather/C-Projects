/*
 * Author: Benjamin Tate
 * Date: 11/4/2015
 * Description: A class that will take the coordinates of a point and returns the distance to another point.
 */

#ifndef POINT_HPP
#define POINT_HPP

// Declaration of Point class
class Point
{
	private:
		double xcoord;
		double ycoord;
	
	public:
		Point(double, double);
		Point();
		void setXCoord(double);
		void setYCoord(double);
		double getXCoord();
		double getYCoord();
		double distanceTo(Point);
};

#endif

