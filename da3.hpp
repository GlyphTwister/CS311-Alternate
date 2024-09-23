// da3.hpp
// Kohlby Vierthaler
// 2024/09/22
// Header file for Potpourri

#ifndef FILE_DA3_HPP_INCLUDED
#define FILE_DA3_HPP_INCLUDED

#include "llnode.hpp"  // For LLNode
#include <cstddef>     // For std::size_t
#include <functional>  // For std::function
#include <stdexcept>


// Looks up a linked list
template <typename ValueType>
ValueType lookup(const LLNode<ValueType> *head, std::size_t index) {
    
    auto h = head;
    std::size_t size = 0;
    while (h != nullptr) {
        h = h->_next;
        ++size;
    }

    if (index >= size) {
        throw std::out_of_range("Index out of range");
    }

    try {
        return index;
    } catch (const std::out_of_range &e) {
        return e.what();
    }

    //return index;  // DUMMY
}


// Implementation in source file
void didItThrow(const std::function<void()> &ff, bool &threw);


template <typename FDIter>
bool checkSorted(FDIter first, FDIter last) {
    
    FDIter previous = first;

    if (first < last) {

        ++first;

        while (first != last) {
            //++first;

            if (*first < *previous) {
                return false;
            }
            previous = first;
            ++first;
        }
        return true;
        
    } else {
        return false;
    }
    return true;
}

template <typename FDIter>
bool operator<(const FDIter &first, const FDIter &other) {
    return first < other;
}

// Implementation in source file
int gcd(int a, int b);


#endif  //#ifndef FILE_DA3_HPP_INCLUDED