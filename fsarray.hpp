// fsarray.hpp
// Kohlby Vierthaler
// 2024/10/16
// Header file for frightfully smart array

#ifndef FILE_FSARRAY_HPP_INCLUDED
#define FILE_FSARRAY_HPP_INCLUDED

#include <cstddef> // For std::size_t
#include <algorithm>


////**** FSARRAY CLASS TEMPLATE ****////


// FSArray class invariants: _arrayptr points to an int array
// _size is nonnegative
template <typename ValType>

class FSArray {

// ***** FSArray: Types *****//

    public:

    using size_type = std::size_t;
    using value_type = int;
    using iterator = value_type *;
    using const_iterator = const value_type *;


// ***** FSArray: ctors, op=, dctor *****//

    // Default ctor & ctor from size
    explicit FSArray(size_type size = 0) 
        : _size(size)
        , 
    {}

    // Copy ctor
    FSArray(const FSArray &other) {

    }

    // Move ctor
    FSArray(const FSArray && other) noexcept {
        
    }

    // Copy assignment operator
    FSArray &operator=(const FSArray &rhs) {

        return *this;
    }

    // Move assignment operator
    FSArray &operator=(const FSArray && rhs) noexcept {
        
        return *this;
    }

    // Dctor
    ~FSArray() {
        //delete
    }


// ***** FSArray: bracket operator *****//

    public:

// ***** FSArray: iterator *****//

    // begin (non-const and const)


};

#endif