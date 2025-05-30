#include <iostream>
#include "Array.hpp"
#include <string>

int main()
{
    // Test default constructor
    Array<int> emptyArray;
    std::cout << "Empty array size: " << emptyArray.size() << std::endl;

    // Test parameterized constructor
    Array<int> numbers(5);
    std::cout << "Number array size: " << numbers.size() << std::endl;

    // Test array access and modification
    try {
        for (unsigned int i = 0; i < numbers.size(); i++) {
            numbers[i] = i * 2;
        }

        // Print array contents
        std::cout << "Array contents: ";
        for (unsigned int i = 0; i < numbers.size(); i++) {
            std::cout << numbers[i] << " ";
        }
        std::cout << std::endl;

        // Test out of bounds access
        std::cout << "Trying to access out of bounds..." << std::endl;
        numbers[10] = 42;
    }
    catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    // Test copy constructor
    Array<int> copy(numbers);
    std::cout << "\nCopied array contents: ";
    for (unsigned int i = 0; i < copy.size(); i++) {
        std::cout << copy[i] << " ";
    }
    std::cout << std::endl;

    // Test assignment operator
    Array<int> assigned = copy;
    std::cout << "Assigned array contents: ";
    for (unsigned int i = 0; i < assigned.size(); i++) {
        std::cout << assigned[i] << " ";
    }
    std::cout << std::endl;

    // Test with different type (string)
    Array<std::string> strings(3);
    strings[0] = "Hello";
    strings[1] = "World";
    strings[2] = "!";
    
    std::cout << "\nString array contents: ";
    for (unsigned int i = 0; i < strings.size(); i++) {
        std::cout << strings[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}