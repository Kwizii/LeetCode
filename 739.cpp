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
        vector<int> monoStk;
        for (int i = 0; i < temperatures.size(); ++i) {
            while (!monoStk.empty() && temperatures[monoStk.back()] < temperatures[i]) {
                int cur = monoStk.back();
                ans[cur] = i - cur;
                monoStk.pop_back();
            }
            monoStk.push_back(i);
        }
        return ans;
    }
};

int main() {
    vector<int> x{89, 62, 70, 58, 47, 47, 46, 76, 100, 70};
    Solution().dailyTemperatures(x);
    return 0;
}