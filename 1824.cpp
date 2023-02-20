//
// Created by Chanvo on 2023/1/21.
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
    static constexpr int inf = 0x3f3f3f3f;
public:
    int minSideJumps(vector<int> &obstacles) {
        int n = obstacles.size() - 1;
        vector<int> d = {1, 0, 1};
        for (int i = 1; i <= n; ++i) {
            int minCnt = inf;
            for (int j = 0; j < 3; ++j) {
                if (j == obstacles[i] - 1)
                    d[j] = inf;
                else
                    minCnt = min(minCnt, d[j]);
            }
            for (int j = 0; j < 3; ++j) {
                if (j == obstacles[i] - 1)
                    continue;
                d[j] = min(d[j], minCnt + 1);
            }
        }
        return *min_element(d.begin(), d.end());
    }
};


int main() {

    return 0;
}