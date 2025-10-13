#include "da_algo.h"

DynamicArray::DynamicArray(const int initial_capacity, const int capacity_increment) {}
DynamicArray::DynamicArray(const int initial_capacity) {}
DynamicArray::DynamicArray() {}
DynamicArray::DynamicArray(const DynamicArray& other) {}
DynamicArray& DynamicArray::operator = (const DynamicArray& other) {}
DynamicArray::~DynamicArray() {}

bool DynamicArray::insert(const int value) { return true; }
bool DynamicArray::insert(const int index, const int value) { return true; }

bool DynamicArray::remove(const int index) { return true; }
bool DynamicArray::remove() { return true; }
bool DynamicArray::append(const int value) { return true; }
int& DynamicArray::operator [] (int index) {}	
int DynamicArray::get(const int index) { return 1; }
bool DynamicArray::set(const int index, const int value) { return true; }

void DynamicArray::print() {}

void DynamicArray::bubbleSortAsc() {}
void DynamicArray::bubbleSortDsc() {}
void DynamicArray::insertionSortAsc() {}
void DynamicArray::insertionSortDsc() {}
void DynamicArray::selectionSortAsc() {}
void DynamicArray::selectionSortDsc() {}

int DynamicArray::getKthLargest(const int k) { return 1; }
int DynamicArray::getKthSmallest(const int k) { return 1; }

int DynamicArray::linearSearch(const int value) { return 1; }
int DynamicArray::binarySearch(const int value) { return 1; }

DynamicArray DynamicArray::merge(const DynamicArray& b) const { return DynamicArray(); }
