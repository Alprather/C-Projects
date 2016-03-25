#pragma once
/*************************************************
** Name: Alicia Prather
** Date: 11/25/2015
** Description: IntSet follows a mathematical set of integers
*****************************************************/

#ifndef INTSET_H
#define INTSET_H

class IntSet
{
private: 
	int intCount;  //number of non NULL integers in the array
	int arraySize;		//total size of the array
	int *set; 
public: 
	IntSet(); 
	~IntSet();
	int size() const; 
	bool isEmpty(); 
	bool contains(int); 
	void setIntCount(int); 
	void setArraySize(int);
	void add(int); 
	void remove(int); 
	void addAll(const IntSet& setB);
	void removeDifferent(const IntSet& setB);
	void removeSame(const IntSet& setB);
	int getIntCount();
};

#endif