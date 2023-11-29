//
// Created by ChanvoBook on 2023/11/16.
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
#include "unordered_map"
#include "list"
#include "sstream"

using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target) {
        int n = matrix[0].size();
        int i = 0, j = matrix.size() * n - 1;
        while (i <= j) {
            int mid = i + (j - i) / 2;
            int r = mid / n, c = mid % n;
            if (matrix[r][c] > target)
                j = mid - 1;
            else if (matrix[r][c] < target)
                i = mid + 1;
            else
                return true;
        }
        return false;
    }
};


int main() {
    return 0;
}
