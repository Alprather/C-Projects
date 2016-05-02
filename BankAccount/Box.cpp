/**********************************************************************
* ** Name: Alicia Prather
* ** Date: 10/29/2015
* ** Description: A program calculates the volume and surface are of a box
* *******************************************************************/

#include <iostream> 
#include "Box.hpp"
using namespace std;

/********************************************************
 * ** 		Box Constructor: 
 * ** Creates an initial value of dimensions of 1
 * ******************************************************/
Box::Box()
{
	height = 1;
	width = 1;
	length = 1;
}
/*****************************************************
 * ** 		Box Constructor: 
 * **accepts paramenters for initial values
 * **************************************************/ 
Box::Box(double h, double w, double l)
{
	height = h;
	width = w;
	length =l;

} 
/****************************************************
 * 		Box::setHeight
 * **sets height
 * **************************************************/
void Box::setHeight(double h)
{
	 height = h;
}
/*****************************************************
 * **		set Width
 * ** Sets the width with parameter
 * **************************************************/
void Box::setWidth(double w)
{
	width = w;
}
/****************************************************
 * **		Box::setLength
 * ** Sets the length with parameter
 * *************************************************/
void Box::setLength(double l)
{
	 length = l;
}

/***************************************************
 * **		Box::getVolume
 * ** Gets the calculated volume
 * *************************************************/
double Box::getVolume()
{
	return height*length*width;
}
/***************************************************
 * **		Box::getSurfaceArea
 * ** Calculates and returns surface area of box
 * *************************************************/

double Box::getSurfaceArea()
{
	return 2 * (width*length + height*length + height*width);
} 
 

