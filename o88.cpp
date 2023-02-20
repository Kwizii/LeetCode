//
// Created by Chanvo on 2023/2/6.
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
    int minCostClimbingStairs(vector<int> &cost) {
        int cur = 0, pre = 0;
        for (int i = 2; i <= cost.size(); ++i) {
            int next = min(cost[i - 1] + cur, cost[i - 2] + pre);
            pre = cur;
            cur = next;
        }
        return cur;
    }
};

int main() {

    return 0;
}