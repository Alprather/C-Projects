#include <iostream>
#include <string>
#include"BankAccount.hpp"
using namespace std;

int main()
{
	BankAccount account1;
	BankAccount account2("Alicia", "3948", 833.20);

	cout << "account 1: " << account1.getCustomerName()<< account1.getCustomerID() << account1.getCustomerBalance() << endl;

	cout << "account 2: " << account2.getCustomerName() << account2.getCustomerID() << account2.getCustomerBalance() << endl;
	account1.deposit(34.39);
	account2.withdraw(7900.76);
	cout << "account 1: " << account1.getCustomerName() << account1.getCustomerID() << account1.getCustomerBalance() << endl;

	cout << "account 2: " << account2.getCustomerName() << account2.getCustomerID() << account2.getCustomerBalance() << endl;
	return 0;

}