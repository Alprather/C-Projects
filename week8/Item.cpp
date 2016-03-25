/**********************
** Name: Alicia Prather
** Date: 11/19/2015
** Description: Item file
***************************/

#include <iostream>
#include <string>
#include "Item.hpp"
/*#include "ShoppingCart.hpp"*/
using namespace std; 

/**********************
** Description: Item::Item sets default constructor
************************/
Item::Item()
{
		setName("");
		setPrice(0.0);
		setQuantity(0);
}

/****************************************
** Description Item::Item sends methods to set fuctions
******************************************/

Item::Item(string itemName, double itemPrice, int itemQuantity)
{
		setName(itemName); 
		setPrice(itemPrice);
		setQuantity(itemQuantity); 
}

/****************************************************
** Description: setName function sets the name of item
***************************************************/
void Item::setName(string itemName)
{
	name = itemName; 
}

/**************************************
** Description: setPrice-sets the price of item
***************************************/
void Item::setPrice(double itemPrice) 
{
	price = itemPrice;
}

/********************************************
** Description: set quantity of item
*********************************************/
void Item::setQuantity(int itemQuantity)
{
	quantity = itemQuantity; 
}

/*******************************************
** Description: Getname gets the name of the item
**********************************************/
string Item::getName()
{
	return name; 
}
/**********************************************
** Description: Getprice of item
*********************************************/
double Item::getPrice()
{

	return price;
}
/**************************************************
** Description: Get quantity of item
****************************************************/
int Item::getQuantity()
{
	return quantity; 
}
