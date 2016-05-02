/**********************
** Name: Alicia Prather
** Date: 11/19/2015
** Description: Item file
***************************/

#include <iostream>
#include "Item.hpp"
#include "ShoppingCart.hpp"

using namespace std; 

/***************************************
** Description: Default constructor
****************************************/
ShoppingCart::ShoppingCart()
{
	Item* shoppingArray[100];
	arrayEnd = 0; 
	for (int count = 0; count < 100; count++)
	{
		shoppingArray[count] = NULL; 
		count++;
		
	}
	int arrayEnd = 0;
}

/******************************************
** Description: adds item to array
******************************************/
void ShoppingCart::addItem(Item* x)
{
	

	
		shoppingArray[arrayEnd]=x;
		
		arrayEnd++;
		
}
/******************************************
**Description: total price adds to total
*****************************************/
double ShoppingCart::totalPrice()
{
	double total = 0; 
	for (int i = 0; i < arrayEnd; i++)
	{
		
	double amount= (shoppingArray[i]->getPrice())*(shoppingArray[i]->getQuantity());
	total += amount; 
		
	}
	return total+4;
}
