// da3.cpp
// Kohlby Vierthaler
// 2024/09/22
// Source file for Potpourri

#include "da3.hpp"     // For Assignment 3 prototypes & templates

#include <functional>
using std::function;
#include <exception>
using std::exception;


void didItThrow(const function<void()> &ff, bool &threw) {
    
    try {
        ff();
        threw = false;
        return;
    }

    catch (exception & e) {
        threw = true;
        throw;
    }

    //return;
}

// Recursive function
int gcd(int a, int b) {

    // base case
    if (a == 0) {
        return b;
    }

    // recursive case
    if (a > b) {
        return gcd(b, a);
    }

    return gcd(b % a, a);
}
