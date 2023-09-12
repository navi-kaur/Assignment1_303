#pragma once
#include <stdexcept>
#include <vector>
int GetIndex(int ints[], int size, int target);
std::vector<int> ModifyIndex(int ints[], int target, int newValue, int size);
void AddToEnd(int ints[], int addValue, int index);
void Remove(int ints[], int index);
