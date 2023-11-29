//
// Created by ChanvoBook on 2023/7/6.
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
    int leastBricks(vector<vector<int>> &wall) {
        int n = wall.size();
        int m = n;
        int sum;
        unordered_map<int, int> cnt;
        for (auto &row: wall) {
            sum = 0;
            for (int j = 0; j < row.size() - 1; ++j) {
                sum += row[j];
                cnt[sum]++;
            }
        }
        for (const auto &[k, v]: cnt) {
            m = min(m, n - v);
        }
        return m;
    }
};

int main() {
    vector<vector<int>> bricks = {{1, 2, 2, 1},
                                  {3, 1, 2},
                                  {1, 3, 2},
                                  {2, 4},
                                  {3, 1, 2},
                                  {1, 3, 1, 1}};
    cout << Solution().leastBricks(bricks);
    return 0;
}