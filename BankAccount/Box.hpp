/***********************************************************
 * ** Name: Alicia Prather
 * ** Date: 10/29/2015
 * ** Description: Header file for box class
 * *********************************************************/
#include <iostream>
#ifndef BOX_H
#define BOX_H
using namespace std; 

class Box
{
private: 
	double height;  //private variables acccessed 
	double width;  //through member functions
	double length;
public: 
	Box();     //prototype for default constructor
	Box(double, double, double);//constructor with arguments
	void setHeight(double); //sets the height
	void setWidth(double); //sets width
	void setLength(double); //sets length
	double getVolume(); //calculates  and returns volume
	double getSurfaceArea();//calculates and returns surface area


};
#endif
