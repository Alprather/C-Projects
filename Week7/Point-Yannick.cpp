/*
 * By: Yannick Amegan
 * 11/2/15
 * -- Point Class Implementation --
 */

#include"Point.hpp"
#include<cmath>

Point::Point(){
    setXCoord(0.0);
    setYCoord(0.0);
}

Point::Point(double xInit, double yInit){
    setXCoord(xInit);
    setYCoord(yInit);
}

void Point::setXCoord(double xIn){
    x = xIn;
}

double Point::getXCoord(){
    return x;
}

void Point::setYCoord(double yIn){
    y = yIn;
}

double Point::getYCoord(){
    return y;
}

double Point::distanceTo(const Point& endpoint){
    return sqrt(pow((endpoint.x - x),2.0) + pow((endpoint.y - y),2.0));
}
