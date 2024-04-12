/* David Belvin
CIS.1202.801
April 17th, 2024
Professor Bowman

CIS 1202 Programming Assignment #15b
Templates
*/

#include <iostream> // Include for input and output.
#include <cmath> // Include for math functions, such as std::round.

// Define a templated function named 'half'.
// The typename T is a placeholder for any numeric data type.
template<typename T>
T half(T value) {

    // The function returns half of the passed value.
    // This will be used for floating-point types (like float and double).
    return value / 2;
}

// Explicitly specialize the 'half' function template for the int data type.
// This is necessary because integer division behaves differently from floating-point division.
template<>
int half(int value) {

    // Use std::round to round the result of the division to the nearest integer.
    // static_cast is used to convert the floating-point result of std::round back to int.
    return static_cast<int>(std::round(value / 2.0));
}

// The main function - the program's entry point.
int main() {

    // Declare a variable 'a' of type double and initialize it with 7.0.
    double a = 7.0;

    // Declare a variable 'b' of type float and initialize it with 5.0f.
    float b = 5.0f;

    // Declare a variable 'c' of type int and initialize it with 3.
    int c = 3;

    // Call the half function template with 'a' as an argument.
    // The template will deduce that T is a double.
    std::cout << half(a) << std::endl; // Expected output: 3.5

    // Call the half function template with 'b' as an argument.
    // The template will deduce that T is a float.
    std::cout << half(b) << std::endl; // Expected output: 2.5

    // Call the specialized half function for the int data type with 'c' as an argument.
    std::cout << half(c) << std::endl; // Expected output: 2 due to rounding

    // Return 0 to signal successful completion of the program.
    return 0;
}
