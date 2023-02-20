//
// Created by Chanvo on 2022/12/18.
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

using namespace std;

class Solution {
public:
//    int minMoves(vector<int> &nums, int k) {
//        vector<int> p;
//        for (int i = 0; i < nums.size(); ++i) {
//            if (nums[i] == 1)p.emplace_back(i);
//        }
//        int minDis = -1;
//        for (int i = 0; i <= p.size() - k; ++i) {
//            int medium = i + k / 2;
//            int dis = 0;
//            for (int j = i; j < i + k; ++j) {
//                dis += abs(p[j] - p[medium]);
//                dis -= abs(j - medium);
//            }
//            if (dis < minDis || minDis == -1)
//                minDis = dis;
//        }
//        return minDis;
//    }
    int minMoves(vector<int> &nums, int k) {
        vector<int> g;
        vector<int> preSum(1, 0);
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 1) {
                g.emplace_back(i - g.size());
                preSum.emplace_back(preSum.back() + g.back());
            }
        }
        int m = g.size(), res = INT_MAX;
        for (int i = 0; i <= m - k; ++i) {
            int mid = i + k / 2;
            res = min(res, (1 - k % 2) * g[mid] +
                           (preSum[i + k] - preSum[mid + 1]) -
                           (preSum[mid] - preSum[i]));
        }
        return res;
    }
};

int main() {
    vector<int> nums = {1, 0, 1, 0, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0};
    cout << Solution().minMoves(nums, 3);
    return 0;
}