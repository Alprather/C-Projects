/*******************************************
**Name: Alicia Prather
**Date: 10/29/2015
**Description: Bank Account tracks deposits
** and withdrawels from an account
*********************************************/
#include <iostream>
#include <string>
#include "BankAccount.hpp"
using namespace std;
/*****************************************************
**		BankAccount::BankAccount
** Sets default and starting balance to 0
*****************************************************/
BankAccount::BankAccount()
{
	customerName = "************";
	customerID = "*************";
	balance = 0;
}
/***************************************************
**				BankAccount::BankAccount
**Constructor to initialize customer name, ID
** and starting balance in the account
**************************************************/
BankAccount::BankAccount(string name, string ID, double startBalance)
{
	customerName = name;
	customerID = ID;
	balance = startBalance;
}
/*****************************************************
				getCustomerName
** Function to retrieve customer name data
*****************************************************/
string BankAccount::getCustomerName()
{
	return customerName;
}
/****************************************************
**			getCustomerID
** gets customerID data
****************************************************/
string BankAccount::getCustomerID()
{
	return customerID;
}
/******************************************************
**			getCustomerBalance
** Gets customer balance data
********************************************************/
double BankAccount::getCustomerBalance()
{
	return balance;
}
/******************************************************
**			withdraw
** calculates a withdrawel
********************************************************/
void BankAccount::withdraw(double withdrawAmount)
{
	balance -= withdrawAmount;
}
/*******************************************************
**			deposit
** calculates balance after withdrawel
********************************************************/
void BankAccount::deposit(double depositAmount)
{
	balance += depositAmount;
}