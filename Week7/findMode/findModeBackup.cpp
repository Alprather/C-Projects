/* Name: Alicia Prather
   Date: 11/11/2015
   Description: A program that finds mode */

#include <iostream>
using namespace std; 
 
  /**********************************
	Description: findMode: finds the mode
	of the array
	*********************************/
int findMode(int nums[], int size)
{
	int number = nums[0];
	int countMode = 0;
	int count = 0; 
	int mode = 0;

	for (int i2 = 0; i2 < size; i2++)
	{
		number = nums[i2];
		for (int i = 0; i < size; i++)
		{

			if (nums[i] == number)
			{
				countMode++;

			}

			if (countMode > count)
			{
				count = countMode;
				mode = nums[i];
				countMode = 0;
			}
		
		}
	}
		 
	
	return mode;
}