/*******************************************************************
 * ** Name Alicia Prather
 * ** Date 10/21/2015
 * ** Description: A program to calculate fall distance
 * *****************************************************************/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std; 
/*
//Function prototype 
double fallDistance(double fallTime); 

int main()

{
   double time, distance;

 
   //prompt the user for the time  
   cout <<"Enter the time in seconds the object takes"; 
   cout <<" to fall."<<endl;  
   cin >> time;

   //Call the fallDistance function taking time as an argument 
   distance = fallDistance(time);

   cout <<"The distance is " << distance <<" m."<<endl;

return 0; 
}
*/
/**********************************************************
 * **                Fall Distance
 **** Description: Fall Distance takes the falling time
 * ** as an arguement.  
 * *******************************************************/

double fallDistance(double fallTime)
{
   double fall; //for fall distance
   fall = (9.8*.5)*(pow(fallTime,2.0)); //calculate fall distance
   
 return fall;
   
}              
   
