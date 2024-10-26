// Problem-5 : Write a function template to calculate the maximum of two numbers of any type (int, float, etc.).

#include <iostream>
using namespace std;

// Function template to calculate the maximum of two numbers
template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}
