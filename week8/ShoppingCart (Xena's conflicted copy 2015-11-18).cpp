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
	int arrayEnd = 0;
	for (int count = 0; count < 100; count++)
	{
		shoppingArray[count] = NULL; 
		count++;
		

	}
}

/******************************************
** Description: adds item to array
******************************************/
void ShoppingCart::addItem(Item *x)
{
	
	Item* shoppingArray[100];
	int arrayEnd = 0;
	shoppingArray[arrayEnd] = x;
	cout << (shoppingArray[0]->getPrice());
		arrayEnd++;
		
}
/******************************************
**Description: total price adds to total
*****************************************/
/*double ShoppingCart::totalPrice()
{
	double total = 0; 
	for (int i = 0; i =5; i++)
	{
		shoppingArray[i];
	double amount= (shoppingArray[i]->getPrice())*(shoppingArray[i]->getQuantity());
	total += amount; 
		
	}
	return total;
}*/
