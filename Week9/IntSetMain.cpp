#include <iostream>
#include "IntSet.hpp"
using namespace std; 

int main()
{
	IntSet setA;
	setA.add(0); 
	setA.add(1);
	setA.add(2);
	setA.add(5);
	setA.add(6);
	setA.add(7);
	setA.add(8);
	

	IntSet setC; 
	setC.add(13); 
	setC.add(9); 
	
	
	setA.remove(8); 
	cout << setA.contains(8); 
	 setA.remove(3); 
	cout << setA.contains(3); 
	cout << setA.getIntCount(); 
	
	

	

#if _DEBUG
	cout << "end, press key to close";
	getchar();
#endif 

}
