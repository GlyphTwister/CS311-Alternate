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


int gcd(int a, int b) {
    return 42;  // DUMMY
    // TODO: WRITE THIS!!!
}
