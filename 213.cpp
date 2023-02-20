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
    int robRange(vector<int> &nums, int start, int end) {
        int cur = nums[start], next = max(nums[start], nums[start + 1]);
        for (int i = start + 2; i <= end; ++i) {
            int tmp = next;
            next = max(cur + nums[i], next);
            cur = tmp;
        }
        return next;
    }

    int rob(vector<int> &nums) {
        int n = nums.size();
        if (n == 1)
            return nums[0];
        else if (n == 2)
            return max(nums[0], nums[1]);
        return max(robRange(nums, 0, n - 2), robRange(nums, 1, n - 1));
    }
};


int main() {

    return 0;
}