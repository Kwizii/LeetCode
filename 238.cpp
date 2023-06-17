//
// Created by ChanvoBook on 2023/6/4.
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

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int> &nums) {
        int n = nums.size();
        vector<int> result(n, 1);
        int prefix = 1;
        for (int i = 0; i < n; ++i) {
            result[i] = prefix;
            prefix *= nums[i];
        }
        int postfix = 1;
        for (int i = n - 1; i >= 0; --i) {
            result[i] *= postfix;
            postfix *= nums[i];
        }
        return result;
    }
};

int main() {
    vector<int> x{1, 2, 3, 4};
    Solution().productExceptSelf(x);
    return 0;
}