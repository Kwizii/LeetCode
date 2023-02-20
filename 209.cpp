//
// Created by Chanvo on 2023/2/14.
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
    int minSubArrayLen(int target, vector<int> &nums) {
        int l = 0, r = 0, n = nums.size();
        int s = 0;
        int ans = n + 1;
        for (; r < nums.size(); ++r) {
            s += nums[r];
            while (s - nums[l] >= target)
                s -= nums[l++];
            if (s >= target)
                ans = min(ans, r - l + 1);
        }
        return ans == n + 1 ? 0 : ans;
    }
};

int main() {
    vector<int> x = {2, 3, 1, 2, 4, 3};
    cout << Solution().minSubArrayLen(7, x);
    return 0;
}