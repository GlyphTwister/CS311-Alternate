// da3.cpp
// Kohlby Vierthaler
// 2024/09/25
// Source file for Potpourri

#include "da3.hpp"     // For Assignment 3 prototypes & templates
#include <functional>
using std::function;


// Attempts to call a function, then handles exceptions
void didItThrow(const function<void()> &ff, bool &threw) {
    
    try {
        ff();
        threw = false;
        return;
    }

    catch (...) {
        threw = true;
        throw;
    }
}

// Recursive calculation of GCD of two integers
// Parameters a and b must both be non-negative
int gcd(int a, int b) {

    // base case
    if (a == 0) {
        return b;
    }

    // greater than recursive case
    if (a > b) {
        return gcd(b, a);
    }

    // general recursive case
    return gcd(b % a, a);
}
