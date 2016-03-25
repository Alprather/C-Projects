#include <iostream>
#include "Book.hpp"
#include "Library.hpp"
#include "Patron.hpp"

Library::Library()
{
	currentDate = 0;
}
void Library::addBook(Book* x)
{
	holdings.push_back(x);

}
void Library::addPatron(Patron* y)
{
	members.push_back(y);
}
std::string Library::checkOutBook(std::string pID, std::string bID)
{

	if (getBook(bID) == NULL&& getPatron(pID) == NULL)
	{
		return "Patron not found.  Book not found.";
	}
	if (getBook(bID) == NULL)
	{
		return "Book not found";
	}
	if (getPatron(pID) == NULL)
	{
		return "Patron not found";
	}
	if (getBook(bID) != NULL && getPatron(pID) != NULL)
	{
		if (getBook(bID)->getLocation() == ON_SHELF)
		{
			getBook(bID)->setLocation(CHECKED_OUT);   //update book's location
			getBook(bID)->setCheckedOutBy(getPatron(pID));    //update book's checked out by
			getPatron(pID)->addBook(getBook(bID));		//add book to patron's checked out books
			getBook(bID)->setDateCheckedOut(currentDate);    //update date checked out
			return "Checkout successful";
		}
		else if (getBook(bID)->getLocation() == CHECKED_OUT)
		{
			return "Book already checked out";
		}
		else if (getBook(bID)->getLocation() == ON_HOLD_SHELF)
		{

			if (getBook(bID)->getRequestedBy() == getPatron(pID))
			{
				getBook(bID)->setLocation(CHECKED_OUT);   //update book's location
				getBook(bID)->setCheckedOutBy(getPatron(pID));    //update book's checked out by
				getPatron(pID)->addBook(getBook(bID));		//add book to patron's checked out books
				getBook(bID)->setDateCheckedOut(currentDate);    //update date checked out
				getBook(bID)->setRequestedBy(NULL);


				return "Checkout successful";
			}
			else
				return "Book on hold for another person";
		}

	}

}
std::string Library::returnBook(std::string bID)
{
	if (getBook(bID) == NULL)
	{
		return "Book not found";
	}


	if (getBook(bID)->getRequestedBy() == NULL)  //book is not on request send to shelf
	{
		getBook(bID)->setLocation(ON_SHELF);   //update book's location to shelf
	}
	else
	{
		getBook(bID)->setLocation(ON_HOLD_SHELF);   //book is requested update book's location to hold
	}

	Patron* p1 = ((getBook(bID))->getCheckedOutBy()); 
	string pID = p1->getIdNum(); 
		/*((getBook(bID))->getCheckedOutBy())->removeBook(getBook(bID));*/
		
		getBook(bID)->setCheckedOutBy(NULL);    //update book's checked out by to NULL
		
		getBook(bID)->setDateCheckedOut(NULL);    //update date checked out to NULL
		
		return "Return successful";
	
}
std::string Library::requestBook(std::string pID, std::string bID)
{
	if (getBook(bID) == NULL&& getPatron(pID) == NULL)
	{
		return "Patron not found.  Book not found.";
	}
	if (getBook(bID) == NULL)
	{
		return "Book not found";
	}
	if (getPatron(pID) == NULL)
	{
		return "Patron not found";
	}
	if (getBook(bID) != NULL&& getPatron(pID) != NULL)
	{

		if (getBook(bID)->getLocation() == ON_SHELF)
		{
			getBook(bID)->setLocation(ON_HOLD_SHELF);		//move to hold shelf
			getBook(bID)->setRequestedBy(getPatron(pID));		//set requested by in book method
			return "Request successful";
		}
		else if (getBook(bID)->getLocation() == CHECKED_OUT)
		{
			if (getBook(bID)->getRequestedBy() == NULL)		//If book is checked out AND not on hold
			{
				getBook(bID)->setRequestedBy(getPatron(pID));		// be sure to test this
				return "Request successful";						//make sure vector initialized to NULL
			}
			else //if book is checked out AND is requested
			
				return "Book already on hold";
		}
		else if (getBook(bID)->getLocation() == ON_HOLD_SHELF)
		{
			return "Book already on hold";
		}
	}
}
std::string Library::payFine(std::string pID, double payment)
{
	if (getPatron(pID) != NULL)
	{
		getPatron(pID)->amendFine(-1*payment);
		return "Payment successful";
	}

	else
	
		return "Patron not found";
}
void Library::incrementCurrentDate()
{
	currentDate++; 
	for (int i = 0; i < members.size(); i++)		//iterates through members
	{
		vector<Book*> memberBooks = members[i]->getCheckedOutBooks();
		for (int i2 = 0; i2 < memberBooks.size(); i2++)		//iterates through member books
		{
			if ((currentDate - (memberBooks[i2]->getDateCheckedOut()))>(memberBooks[i2]->getCheckOutLength()))
								members[i]->amendFine(0.10);	
		}
	}
}
Patron* Library::getPatron(std::string pID)
{
	for (int i = 0; i < members.size(); i++)
	{
		if (pID == members[i]->getIdNum())
			return members[i];
	}	
			return NULL;	
}
Book* Library::getBook(std::string bID)
{
	for (int i = 0; i < holdings.size(); i++)
	{
		if (bID == holdings[i]->getIdCode())
			return holdings[i];
	}
			return NULL;
}