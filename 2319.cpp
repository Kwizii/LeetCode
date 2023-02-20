//
// Created by Chanvo on 2023/1/31.
//
#include "iostream"
#include "queue"
#include "stack"
#include "vector"
#include "algorithm"
#include "cstring"
#include "cmath"
#include "set"
#include "map"
#include "numeric"
#include "unordered_set"

using namespace std;

class Solution {
public:
    bool checkXMatrix(vector<vector<int>> &grid) {
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid.size(); ++j) {
                if (i == j || i == grid.size() - 1 - j) {
                    if (grid[i][j] == 0)
                        return false;
                } else if (grid[i][j] != 0)
                    return false;
            }
        }
        return true;
    }
};

int main() {

    return 0;
}