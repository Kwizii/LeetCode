//
// Created by ChanvoBook on 2023/6/21.
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
    vector<int> dailyTemperatures(vector<int> &temperatures) {
        vector<int> ans(temperatures.size(), 0);
        vector<int> stk;
        for (int i = 0; i < temperatures.size(); ++i) {
            if (stk.empty()) {
                stk.emplace_back(i);
                continue;
            }
            while (!stk.empty()) {
                if (temperatures[stk.back()] >= temperatures[i])
                    break;
                ans[stk.back()] = i - stk.back();
                stk.erase(stk.end() - 1);
            }
            stk.emplace_back(i);
        }
        return ans;
    }
};

int main() {
    vector<int> x{89, 62, 70, 58, 47, 47, 46, 76, 100, 70};
    Solution().dailyTemperatures(x);
    return 0;
}