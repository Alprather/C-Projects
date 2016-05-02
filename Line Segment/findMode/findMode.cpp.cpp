/* Name: Alicia Prather
   Date: 11/11/2015
   Description: A program that finds mode */

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
 
  /**********************************
	Description: findMode: finds the mode
	of the array
	*********************************/ 
vector <int> findMode(int nums[], int size)
{

	{	
		
	sort(nums, nums + size);
	for (int i = 0; i < size; i++)
		cout<< nums[i];
}
	int number = nums[0];
	int countMode = 0;
	int count = 0;
	int mode = 0;
	vector <int> modes;

	for (int i2 = 0; i2 < size; i2++)
	{
		countMode = 0; 
		number = nums[i2];
		for (int i = 1; i < size; i++)
		{

			if (nums[i] == number)
			{
				countMode++;

			}

			if (countMode > count)
			{
				count = countMode;
				mode = nums[i];
			}
		}	
	}
	countMode = 1;
	for (int i2 = 1; i2 < size; i2++)
	{
		
		number = nums[i2];

			if (nums[i2] == nums[i2-1])
			{
				countMode++;
			}

			if (countMode == count)
			{
				mode = nums[i2];
				modes.push_back(mode);
				countMode = 1; 
			}
		}


	return modes;

}