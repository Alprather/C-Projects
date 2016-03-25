/**********************************************************
 * ** Name: Alicia Prather
 * ** Date: 10/21/2015
 * ** Description: hailstone sequence
 * ******************************************************/

#include <iostream>
using namespace std; 
/*
 int hailstone (int x);

int main()
{
   int num;
   int steps; 

   cout <<"Enter an integer."<<endl;
   cin >> num;  

   steps =  hailstone(num);
   cout << "It took "<< steps << " steps."<<endl;  

return 0;
}
*/

/****************************************************
 * ** Description: Hailstone sequence- user chooses
 * ** an integer.  If that integer is even, then you 
 **** divide it by two to get the next integer.  If it is 
 * ** odd then multiply by three and add one.  Function 
 * ** calculates how many tries to get to 1.  
 * **************************************************/

int hailstone (int x)
{
  
   int count; // count of steps 
   //initialize for loop to count steps

   for(count = 0; x!=1; count++) 
  {
   if (x % 2 ==0) //number is even
	x /= 2;  
   else  //number is odd
	x = x*3+1;

  }
//return steps counted to main
return count; 
}
 

