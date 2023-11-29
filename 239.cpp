//
// Created by ChanvoBook on 2023/11/29.
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
#include "deque"
#include "numeric"
#include "unordered_set"
#include "unordered_map"
#include "list"
#include "sstream"

using namespace std;

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int> &nums, int k) {
        vector<int> maximum(nums.size() - k + 1);
        deque<int> q;
        int l = 0, r = 0;
        while (r < nums.size()) {
            while (!q.empty() && nums[q.back()] < nums[r])
                q.pop_back();
            q.push_back(r);
            if (l > q.front())
                q.pop_front();
            if (r + 1 >= k)
                maximum[l++] = nums[q.front()];
            r++;
        }
        return maximum;
    }
};

int main() {
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7};
    Solution().maxSlidingWindow(nums, 3);
    return 0;
}