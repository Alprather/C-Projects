/**********************************************************
** Name: Alicia Prather
** Date 11/25/2015
** Description: Int set follows a mathematical set of integers
************************************************************/

#include <iostream>
#include "IntSet.hpp"
using namespace std;

IntSet::IntSet()
{
	setArraySize(10); 
	setIntCount(0); 
	set = new int[arraySize];
	for (int i = 0; i < arraySize; i++)
	{
		set[i] = NULL;
	}
}

IntSet::~IntSet()
{
	delete []set; 
	set = 0;
}
void IntSet::setIntCount(int numberInts)
{
	intCount = numberInts; 
}
void IntSet::setArraySize(int sizeOfArray)
{
	arraySize = sizeOfArray; 
}

int IntSet::size() const
{
	return intCount;
}

bool IntSet::isEmpty()
{
	if (intCount == 0)
		return true;
	else
		return false;
}

bool IntSet::contains(int x)
{ 
	for (int i = 0; i < arraySize; i++)
	{
		if (set[i] == x)
			return true; 
	}
	return false;		
}

void IntSet::add(int y)
{
	if (!contains(y))
	{
		if (arraySize > intCount);
		{
			set[intCount] = y;
			intCount++;
		}
	}

		
		if (arraySize-1 == intCount)
		{
			int countTemp = arraySize;
			int *temp;
			temp = new int[countTemp];			
			for (int i = 0; i < countTemp; i++)
			{
				temp[i] = set[i];
			}

			delete[] set;
			arraySize = arraySize * 2;
		
			set = new int[arraySize];
			for (int i = 0; i < arraySize; i++)
			{
				set[i] = NULL;
			}
			for (int i = 0; i < countTemp; i++)
			{
				set[i] = temp[i];
			}
			delete[] temp;
			temp = 0; 
			 
			set[intCount] = y;
			intCount++;   
		}
	}




void IntSet::remove(int z)
{
	for (int i = 0; i < arraySize; i++)
	{
		if (set[i] == z)
		{
			while (i < arraySize-1)
			{
				set[i] = set[i + 1];
				i++;
			}
				set[arraySize - 1] = NULL;
				intCount--;
		}
	}
}
void IntSet::addAll(const IntSet& setB)
{
	for (int i = 0; i < setB.size(); ++i)
	{
		if (!contains(setB.set[i]))
			add(setB.set[i]);
	}
}

void IntSet::removeDifferent(const IntSet& setB)
{
	int* tempArray = new int[arraySize];
	int tempInts = 0;

	for (int i = 0; i < setB.size(); ++i)
	{
		if (contains(setB.set[i]))
		{
			tempArray[tempInts] = setB.set[i];
			tempInts++;
		}
	}

	delete[] set;
	set = 0;

	set = tempArray;
	intCount = tempInts;
}

void IntSet::removeSame(const IntSet& setB)
{
	for (int i = 0; i < setB.size(); ++i)
	{
		if (contains(setB.set[i]))
			remove(setB.set[i]);
	}
}

int IntSet::getIntCount()
{
	return intCount; 
}
	
