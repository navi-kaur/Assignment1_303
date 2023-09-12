// Assignment1_303.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
#include "UserFunctions.h"


int main()
{
    int numbers[100];
    std::ifstream myFile; 
    myFile.open("Text.txt");
    int a;
    for (int i = 0; i < 100; i++) {
        myFile >> a;
        AddToEnd(numbers, a, i);
        
    }

    //Outputting GetIndex function 
    std::cout << GetIndex(numbers, 100, 4) << std::endl;

    //Declaring vector for ModifyIndex function and outputting the vector
    std::vector<int> v = ModifyIndex(numbers, 6, 55, 100);
    std::cout << v[0] << " " << v[1] << std::endl;

    //creating array for AddToEnd function
    int addValues[5] = {0, 0, 0, 0, 0};

    //Calling and outputting AddToEnd function
    AddToEnd(addValues, 5, 0);
    for (int i = 0; i < 5; i++) {
        std::cout << addValues[i] << " ";
    }
    std::cout << std::endl;
    
    //Calling Remove function
    Remove(numbers, 98);


    // try and throw for AddToEnd function
    int values[5] = { 0, 0, 0, 0, 0 };
    for (int i = 0; i < 5; i++) {
        
        std::cout << values[i] << " ";
    }
    try
    {
        AddToEnd(values, 6, 101);
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;

    }

    std::cout << std::endl;
    
    // try and throw for ModifyIndex function
    int modifyValues[5] = { 1, 2, 3, 4, 5 };
    for (int i = 0; i < 5; i++) {

        std::cout << modifyValues[i] << " ";

    }
    try
    {
        ModifyIndex(modifyValues, 105, 8, 5);
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

}


