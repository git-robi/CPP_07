#include "iter.hpp"
#include <iostream>
#include <string>

// This is a template function that can work with any type
template<typename T>
void print(T& x)
{
    std::cout << x << std::endl;
}

int main()
{
    // Test with strings
    const int strLen = 5;
    std::string strArray[strLen] = {"one", "two", "three", "four", "five"};
    
    std::cout << "Testing with strings:" << std::endl;
    ::iter(strArray, strLen, print<std::string>);

    // Test with integers
    const int intLen = 5;
    int intArray[intLen] = {1, 2, 3, 4, 5};
    
    std::cout << "\nTesting with integers:" << std::endl;
    ::iter(intArray, intLen, print<int>);
    
    // Test with doubles
    const int dblLen = 5;
    double dblArray[dblLen] = {1.1, 2.2, 3.3, 4.4, 5.5};
    
    std::cout << "\nTesting with doubles:" << std::endl;
    ::iter(dblArray, dblLen, print<double>);

    return 0;
}