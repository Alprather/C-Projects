
#include <iostream>
#include <string>
#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
using namespace std; 

class BankAccount
{
private: 
	string customerName; //private member variables
	string customerID;
	double balance; 


public: 
	BankAccount(); //sets default starting values
	BankAccount(string, string, double); //takes 3 parameters for an account
	string getCustomerName(); //retrieve customer name data
	string getCustomerID(); //retreive customer ID data
	double getCustomerBalance(); //get customer balance data
	void withdraw(double); //subtract a withdrawel from balance
	void deposit(double); //add a deposit to balance

};
#endif