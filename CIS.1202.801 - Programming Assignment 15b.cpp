/* David Belvin
CIS.1202.801
April 17th, 2024
Professor Bowman

CIS 1202 Programming Assignment #15b
Templates
*/

#include <iostream>
#include <cmath> // For std::round

template<typename T>
T half(T value) {
    return value / 2;
}

template<>
int half(int value) {
    return static_cast<int>(std::round(value / 2.0));
}

int main() {
    double a = 7.0;
    float b = 5.0f;
    int c = 3;

    std::cout << half(a) << std::endl; 
    std::cout << half(b) << std::endl; 
    std::cout << half(c) << std::endl; 

    return 0;
}