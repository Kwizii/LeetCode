//
// Created by ChanvoBook on 2023/7/8.
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
    int subarraySum(vector<int> &nums, int k) {
        int preSum = 0;
        int cnt = 0;
        unordered_map<int, int> prefixMap;
        prefixMap[0] = 1;
        for (int num: nums) {
            preSum += num;
            int diff = preSum - k;
            cnt += prefixMap[diff];
            prefixMap[preSum]++;
        }
        return cnt;
    }
};

int main() {
    vector<int> x{1, 1, 1};
    Solution().subarraySum(x, 2);
    return 0;
}