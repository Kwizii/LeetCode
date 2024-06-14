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
        int p = 0, c = 0, n = 0;
        for (int i = 2; i <= cost.size(); ++i) {
            n = min(c + cost[i - 1], p + cost[i - 2]);
            p = c;
            c = n;
        }
        return n;
    }

//    int minCostClimbingStairs(vector<int> &cost) {
//        int n = cost.size();
//        int *dp = new int[n + 1];
//        dp[0] = dp[1] = 0;
//        for (int i = 2; i <= n; ++i) {
//            dp[i] = min(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]);
//        }
//        return dp[n];
//    }


//    int minCostClimbingStairs(vector<int> &cost) {
//        int cur = 0, pre = 0;
//        for (int i = 2; i <= cost.size(); ++i) {
//            int next = min(cost[i - 1] + cur, cost[i - 2] + pre);
//            pre = cur;
//            cur = next;
//        }
//        return cur;
//    }
};

int main() {
    vector<int> x{10, 15, 20};
    cout << Solution().minCostClimbingStairs(x);
    return 0;
}