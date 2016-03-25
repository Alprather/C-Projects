/***************************************************************
 * ** Name: Alicia Prather
 * ** Date: 10/21/2015
 * ** Description: Sorts values in ascending order
 * ************************************************************/
 
#include <iostream>
using namespace std; 
/*
void smallSort (int &a, int&b, int &c);
int main()
{
int a=14;
int b=-90;
int c=2; 

smallSort (a,b,c);
cout<<a<<","<<b<<","<<c<<endl;

return 0; 
}

*/

/******************************************************
 * *****             smallSort                ********
 * **Description: Small sort takes three int parameters
 * ** by reference and sorts their values into 
 * ** ascending order.  
 * ****************************************************/ 

void smallSort(int &a, int &b, int &c)
{
    int tempA =a,
  	tempB =b,  //temp variables to hold
	tempC =c; // a,b,c, while variables sort
 
    //if and else if statements to order variables
    if (tempB > tempA && tempA > tempC)
	{
	a = tempC; 
	b = tempA;
	c = tempB;
	} 
    else if (tempC > tempA && tempA > tempB)
	{
	 a = tempB;
	 b = tempA;
	 c = tempC;
	}
    else if (tempA > tempB && tempB > tempC)
	{ 
	a = tempC;
	b = tempB;
	c = tempA;
	}
    else if (tempC > tempB && tempB > tempA)
	{
	 a = tempA;
	 b = tempB;
	 c = tempC;
	}
    else if (tempA > tempC && tempC > tempB)
	{
	 a = tempB;
	 b = tempC;
	 c = tempA;
	}
    else if (tempB > tempC && tempC > tempA)
	{
	 a = tempA;
	 b = tempC;
	 c = tempB; 
	}
}
