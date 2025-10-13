#include "da_algo.h"

DynamicArray::DynamicArray(const int initial_capacity, const int capacity_increment) {}
DynamicArray::DynamicArray(const int initial_capacity) {}
DynamicArray::DynamicArray() {}
DynamicArray::DynamicArray(const DynamicArray& other) {}
DynamicArray& DynamicArray::operator = (const DynamicArray& other) {}
DynamicArray::~DynamicArray() {}

bool DynamicArray::insert(const int value) {}
bool DynamicArray::insert(const int index, const int value) {}
bool DynamicArray::remove(const int index) {}
bool DynamicArray::remove() {}
bool DynamicArray::append(const int value) {}
int& DynamicArray::operator [] (int index) {}	//Bonus
int DynamicArray::get(const int index) {}
bool DynamicArray::set(const int index, const int value) {}

void DynamicArray::print() {}

void DynamicArray::bubbleSortAsc() {}
void DynamicArray::bubbleSortDsc() {}
void DynamicArray::insertionSortAsc() {}
void DynamicArray::insertionSortDsc() {}
void DynamicArray::selectionSortAsc() {}
void DynamicArray::selectionSortDsc() {}

int DynamicArray::getKthLargest(const int k) {}
int DynamicArray::getKthSmallest(const int k) {}

int DynamicArray::linearSearch(const int value) {}
int DynamicArray::binarySearch(const int value) {}

DynamicArray DynamicArray::merge(const DynamicArray& b) const { return DynamicArray(); }
