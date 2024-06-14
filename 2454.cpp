//
// Created by ChanvoBook on 2023/12/12.
//
#include "iostream"
#include "queue"
#include "deque"
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
#include "structs.cpp"

using namespace std;

class Solution {
public:
    vector<int> secondGreaterElement(vector<int> &nums) {
        vector<int> ans(nums.size(), -1);
        vector<int> stk;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> q;
        for (int i = 0; i < nums.size(); ++i) {
            while (!q.empty() && q.top().first < nums[i]) {
                ans[q.top().second] = nums[i];
                q.pop();
            }
            while (!stk.empty() && nums[stk.back()] < nums[i]) {
                q.emplace(nums[stk.back()], stk.back());
                stk.pop_back();
            }
            stk.emplace_back(i);
        }
        return ans;
    }
};

int main() {

    return 0;
}