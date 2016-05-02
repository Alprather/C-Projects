#include<iostream>
#include "Box.hpp"
using namespace std;

int main()
{
	Box box1;
	Box box2(10.0, 4.0, 6.0); 
	
	
	cout<<box1.getVolume()<<endl; 
	cout<<box2.getVolume()<<endl;
	cout <<box1.getSurfaceArea()<<endl;
	cout <<box2.getSurfaceArea()<<endl;
	box2.setHeight(4.0);

	cout<<box2.getVolume()<<endl;
	
	return 0;
}
