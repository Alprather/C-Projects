#include <iostream>
#include "Book.hpp"
#include "Patron.hpp"

/*#include "Library.hpp"*/

using namespace std; 

Book::Book(string idc, string t, string a)
{
	idCode = idc; 
	title = t; 
	author = a; 
	location = ON_SHELF;
}
int Book::getCheckOutLength()
{
	return CHECK_OUT_LENGTH;
}
string Book::getIdCode()
{
	return idCode;
}
string Book::getTitle()
{
	return title; 
}
string Book::getAuthor()
{
	return author; 
}
Locale Book::getLocation()
{
	return location;
}
void Book::setLocation(Locale locationA)
{
	location = locationA; 
}
Patron* Book::getCheckedOutBy()
{
	return checkedOutBy; 
}
void Book::setCheckedOutBy(Patron* x)
{ 
	Patron* checkedOutBy=x; 

}

Patron* Book::getRequestedBy()
{
	return requestedBy; 
}
void Book::setRequestedBy(Patron* x)
{
	Patron* requestedBy = x; 
}
int Book::getDateCheckedOut()
{
	return dateCheckedOut; 
}
void Book::setDateCheckedOut(int date)
{
	dateCheckedOut = date; 
}