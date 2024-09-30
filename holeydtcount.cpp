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
    int squares = (dim_x * dim_y) - 2;

    int answer = holeyDTCount_recurse(board, dim_x, dim_y, squares);

    return answer;
}

// Workhorse function implementation
int holeyDTCount_recurse(vector<vector<int>> &board, 
int dim_x, int dim_y, int squaresLeft) {
    
    
    // check for full solution
    if (squaresLeft == 0) {
        return 1;
    }

    int total = 0;

    // iterate through board
    for (int i = 0; i < dim_x; ++i) {
        for (int j = 0; j < dim_y; ++j) {

            // check board bounds, then try horizontal placement
            if (0 <= i && i < dim_x && 0 <= j && j < dim_y
            && i + 1 < dim_x) {
                if (board[i][j] == 0 && board[i + 1][j] == 0) {
                    board[i][j] = 1;
                    board[i + 1][j] = 1;
                    squaresLeft -= 2;
                    total += holeyDTCount_recurse(board, dim_x, dim_y, squaresLeft);
                    board[i][j] = 0;
                    board[i + 1][j] = 0;
                    squaresLeft += 2;
                    //return total;
                } 
            }

            // check board bounds, then try vertical placement
            if (0 <= i && i < dim_x && 0 <= j && j < dim_y 
            && 0 <= j - 1) {
                if (board[i][j] == 0 && board[i][j - 1] == 0) {
                    board[i][j] = 1;
                    board[i][j - 1] = 1;
                    squaresLeft -= 2;
                    total += holeyDTCount_recurse(board, dim_x, dim_y, squaresLeft);
                    board[i][j] = 0;
                    board[i][j - 1] = 0;
                    squaresLeft += 2;
                    //return total;
                }
            }
        }
    }

    return total;
}
