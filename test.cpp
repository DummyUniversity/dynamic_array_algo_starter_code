#include "test.h"
#include <iostream>
#include "da_algo.h"

using std::cout;
using std::string;

int test(char* str)
{
	std::string test = str;
	DynamicArray a(5, 5);

	if (test == "000")
	{
		a.insert(4);
		a.insert(3);
		a.insert(2);
		a.insert(1);
		a.insert(0);
		a.bubbleSortAsc();
		a.print();	//Should print 0 1 2 3 4
	}

	if (test == "001")
	{
		a.insert(0);
		a.insert(1);
		a.insert(2);
		a.insert(3);
		a.insert(4);
		a.bubbleSortDsc();
		a.print();	//Should print 4 3 2 1 0
	}

	if (test == "002")
	{
		a.insert(4);
		a.insert(3);
		a.insert(2);
		a.insert(1);
		a.insert(0);
		a.insertionSortAsc();
		a.print();	//Should print 0 1 2 3 4
	}

	if (test == "003")
	{
		a.insert(0);
		a.insert(1);
		a.insert(2);
		a.insert(3);
		a.insert(4);
		a.insertionSortDsc();
		a.print();	//Should print 4 3 2 1 0
	}

	if (test == "004")
	{
		a.insert(4);
		a.insert(3);
		a.insert(2);
		a.insert(1);
		a.insert(0);
		a.selectionSortAsc();
		a.print();	//Should print 0 1 2 3 4
	}

	if (test == "005")
	{
		a.insert(0);
		a.insert(1);
		a.insert(2);
		a.insert(3);
		a.insert(4);
		a.selectionSortDsc();
		a.print();	//Should print 4 3 2 1 0
	}

	if (test == "006")
	{
		a.insert(0);
		a.insert(1);
		a.insert(2);
		a.insert(3);
		a.insert(4);
		if (a.getKthLargest(2) == 2) cout << "Correct\n";
	}

	if (test == "007")
	{
		a.insert(0);
		a.insert(1);
		a.insert(2);
		a.insert(3);
		a.insert(4);
		if (a.getKthSmallest(2) == 1) cout << "Correct\n";
	}

	if (test == "008")
	{
		a.insert(0);
		a.insert(1);
		a.insert(2);
		a.insert(3);
		a.insert(4);
		if (a.getKthLargest(6) == -1) cout << "Correct\n";
	}

	if (test == "009")
	{
		a.insert(0);
		a.insert(1);
		a.insert(2);
		a.insert(3);
		a.insert(4);
		if (a.getKthSmallest(6) == -1) cout << "Correct\n";
	}

	if (test == "010")
	{
		a.insert(0);
		a.insert(1);
		a.insert(2);
		a.insert(3);
		a.insert(4);
		if (a.linearSearch(2) == 2) cout << "Correct\n";
	}

	if (test == "011")
	{
		a.insert(0);
		a.insert(2);
		a.insert(4);
		a.insert(3);
		a.insert(1);
		a.linearSearch(2);
		a.print();	//Should print 0 2 4 3 1
	}

	if (test == "012")
	{
		a.insert(0);
		a.insert(1);
		a.insert(2);
		a.insert(3);
		a.insert(4);
		if (a.binarySearch(2) == 2) cout << "Correct\n";
	}

	if (test == "013")
	{
		a.insert(0);
		a.insert(2);
		a.insert(4);
		a.insert(3);
		a.insert(1);
		a.binarySearch(2);
		a.print();	//Should print 0 2 4 3 1
	}

	if (test == "014")
	{
		a.insert(0);
		a.insert(2);
		a.insert(4);
		a.insert(6);
		a.insert(8);

		DynamicArray b(5, 5);
		a.insert(1);
		a.insert(3);
		a.insert(5);
		a.insert(7);
		a.insert(9);

		DynamicArray c = a.merge(b);
		c.print();	//Should print 0 1 2 3 4 5 6 7 8 9
	}

	if (test == "015")
	{
		a.insert(0);
		a.insert(2);
		a.insert(4);
		a.insert(6);
		a.insert(8);

		DynamicArray b(5, 5);
		a.insert(1);
		a.insert(3);
		a.insert(5);
		a.insert(7);
		a.insert(9);

		DynamicArray c = a.merge(b);
		a.print();	//Should print 0 2 4 6 8
	}

	if (test == "016")
	{
		a.insert(0);
		a.insert(2);
		a.insert(4);
		a.insert(6);
		a.insert(8);

		DynamicArray b(5, 5);
		a.insert(1);
		a.insert(3);
		a.insert(5);
		a.insert(7);
		a.insert(9);

		DynamicArray c = a.merge(b);
		b.print();	//Should print 1 3 5 7 9
	}

	return 0;
}
