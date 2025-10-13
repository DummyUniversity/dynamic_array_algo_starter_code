#ifndef DYNAMIC_ARRAY_ALGO_20251013_H
#define DYNAMIC_ARRAY_ALGO_20251013_H

#include <iostream>

class DynamicArray
{
	int* array = NULL;
	int array_size = 0;
	int capacity = 0;

public:

	DynamicArray(const int initial_capacity, const int capacity_increment);
	DynamicArray(const int initial_capacity);
	DynamicArray();
	DynamicArray(const DynamicArray& other);
	DynamicArray& operator = (const DynamicArray& other);
	~DynamicArray();
	bool insert(const int value);
	bool insert(const int index, const int value);
	bool remove(const int index);
	bool remove();
	bool append(const int value);
	int& operator [] (int index);
	int get(const int index);
	bool set(const int index, const int value);
	void print();

	void bubbleSortAsc();
	void bubbleSortDsc();
	void insertionSortAsc();
	void insertionSortDsc();
	void selectionSortAsc();
	void selectionSortDsc();

	int getKthLargest(const int k);
	int getKthSmallest(const int k);

	int linearSearch(const int value);
	int binarySearch(const int value);

	DynamicArray merge(const DynamicArray& b) const;
};

#endif