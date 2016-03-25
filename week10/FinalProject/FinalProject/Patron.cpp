#include <iostream>
#include <vector>
#include "Book.hpp"

/*#include "Library.hpp"*/
#include "Patron.hpp"

using namespace std;

Patron::Patron(string idn, string n)
{
	idNum = idn; 
	name = n; 
	fineAmount = 0.0; 
}
string Patron::getIdNum()
{
	return idNum;
}
string Patron::getName()
{
	return name; 
}
std::vector<Book*> Patron::getCheckedOutBooks()
{
	return checkedOutBooks;
}
void Patron::addBook(Book* b)
{

	checkedOutBooks.push_back(b);
	
}
void Patron::removeBook(Book* b)
{

	for (int count = 0; count < checkedOutBooks.size(); count++)
	{
		if (checkedOutBooks[count] == b)
		{
			checkedOutBooks.erase(checkedOutBooks.begin() + count);
		}
	}
}

double Patron::getFineAmount()
{
	return fineAmount; 
}
void Patron::amendFine(double amount)
{
	fineAmount += amount; 
}

