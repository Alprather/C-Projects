#include <iostream>
#include "Patron.hpp"
#include "Library.hpp"
#include "Book.hpp"
#include <vector>
using namespace std; 

int main()
{
	/*string idcode = "111";
	string title = "title1";
	string author = "author1";
	Book book1 (idcode, title, author);
	Patron patron1 ("222", "Bob"); 
	book1.setCheckedOutBy(&patron1); 
	book1.setDateCheckedOut(12);
	patron1.addBook(&book1);
	book1.setLocation(ON_SHELF);
	/*patron1.removeBook(&book1);*/
	/*patron1.removeBook(&book1);*/
	
	
	/*Library libraryBook; 
	libraryBook.addPatron(&patron1);
	libraryBook.addBook(&book1);*/
	/*cout<<libraryBook.payFine("2837", 65.03);*/


	
	/*cout << patron1.getFineAmount(); */
	/*libraryBook.requestBook("222","111");*/
	/*cout << libraryBook.checkOutBook("222", "111");*/
	Book b1("123", "War and Peace", "Tolstoy");
	Book b2("234", "Moby Dick", "Melville");
	Book b3("345", "Phantom Tollbooth", "Juster");
	Patron p1("abc", "Felicity");
	Patron p2("bcd", "Waldo");
	Library lib;
	lib.addBook(&b1);
	lib.addBook(&b2);
	lib.addBook(&b3);
	lib.addPatron(&p1);
	lib.addPatron(&p2);
	
	double p1Fine = p1.getFineAmount();
	double p2Fine = p2.getFineAmount();
	lib.checkOutBook("abc", "234");
	lib.checkOutBook("bcd", "123"); 
	
	lib.returnBook("234");

	for (int i = 0; i<80; i++)
		lib.incrementCurrentDate();
	
	cout << p1.getFineAmount() << endl;
	cout << p2.getFineAmount() << endl;
	 
	
	for (int i = 0; i<50; i++)
		lib.incrementCurrentDate();
	
	
	
		

	
	


	

	

#if _DEBUG
	cout << "end, press key to close";
	getchar();
#endif 

}
