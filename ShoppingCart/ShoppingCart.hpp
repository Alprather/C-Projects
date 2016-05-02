#pragma once
/**********************
** Name: Alicia Prather
** Date: 11/19/2015
** Description: Shopping Cart Header file
***************************/

#ifndef SHOPPINGCART_H
#define SHOPPINGCAR_H


class ShoppingCart
{
private: 
	Item* shoppingArray[100];
	int arrayEnd; 
	double total; 

public: 
	ShoppingCart();
	void addItem(Item* x);
	double totalPrice();

};
#endif


