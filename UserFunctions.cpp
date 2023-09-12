#include "UserFunctions.h"


int GetIndex(int ints[], int size, int target) // This function returns the index in which the target is stored in
{
	for (int i = 0; i < size; i++) {
		if (ints[i] == target) {
			return i;
		}
	}
	return -1;
}

// This function modifies the value in the given index with the newValue 
std::vector<int> ModifyIndex(int ints[], int index, int newValue, int size){
	if (index < 0 || index >= 100) {
		// Throws error if the index is out of bounds
		throw std::invalid_argument("Index value is out of bounds");
	}
		
	
	int oldValue = ints[index]; //Stores the old value
	ints[index] = newValue; // stores the new value
	return std::vector<int> { oldValue, newValue };
}

void AddToEnd(int ints[], int addValue, int lastIndex)   // Adds a value at the end of the array
{
	if (lastIndex < 0 || lastIndex >= 100) { 
		throw std::invalid_argument("Index value is out of bounds"); // Throws error if the index is out of bounds
	}
	ints[lastIndex] = addValue;

}

void Remove(int ints[], int index) //Removes the value from the given index by replacing it with "0".
{
	ints[index] = 0;
}
