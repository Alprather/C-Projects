/*
 * By: Yannick Amegan
 * 11/2/15
 * -- Point Class Interface --
 */

#ifndef POINT_HPP
#define POINT_HPP

class Point{ 
   
    private:
	double x;
	double y;

    public:
	Point();
	Point(double, double);
	void setXCoord(double);
	double getXCoord();
	void setYCoord(double);
	double getYCoord();
	double distanceTo(const Point&);
};
#endif
