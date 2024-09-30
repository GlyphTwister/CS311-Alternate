// holeydtcount.cpp
// Kohlby Vierthaler
// 2024/09/29
// Source file for Recursive Backtracking

#include "holeydtcount.hpp"
#include <vector> // For board representation

using std::vector;

// Wrapper function implementation
int holeyDTCount(int dim_x, int dim_y,
int hole1_x, int hole1_y,
int hole2_x, int hole2_y) {

    vector<vector<int>> board(dim_x, vector<int>(dim_y, 0));
    board[hole1_x][hole1_y] = 1;
    board[hole2_x][hole2_y] = 1;

    int answer = holeyDTCount_recurse(board, dim_x, dim_y);

    return answer;
}

// Workhorse function implementation
int holeyDTCount_recurse(&board, int dim_x, int dim_y) {
    
    // base case
    if () {
        
    }

    // recursive case
    if (board[][] == 0) {

    }

    // reset board to normal


}