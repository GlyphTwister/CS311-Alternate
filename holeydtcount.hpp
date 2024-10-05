// holeydtcount.hpp
// Kohlby Vierthaler
// 2024/10/04
// Header file for Recursive Backtracking

#ifndef FILE_HOLEYDTCOUNT_HPP_INCLUDED
#define FILE_HOLEYDTCOUNT_HPP_INCLUDED

#include <vector>
using std::vector;


// Wrapper function prototype
int holeyDTCount(int dim_x, int dim_y,
int hole1_x, int hole1_y,
int hole2_x, int hole2_y);

// Recursive workhorse function prototype
int holeyDTCount_recurse(vector<vector<int>> &board, 
int dim_x, int dim_y, int squaresLeft);

#endif
