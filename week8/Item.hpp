
/**********************
** Name: Alicia Prather
** Date: 11/19/2015
** Description: Item header file
***************************/

#pragma once 

#ifndef ITEM_H
#define ITEM_H

using namespace std; 

class Item
{
private: 
	string name;
	double price;
	int quantity;
public: 
	Item();
	Item(string, double, int);
	void setName(string);
	void setPrice(double);
	void setQuantity(int);
	string getName();
	double getPrice(); 
	int getQuantity();  
};
#endif
