//
// Created by ChanvoBook on 2023/12/10.
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
    int largestRectangleArea(vector<int> &heights) {
        int n = heights.size();
        int ans = 0;
        vector<int> monoStk;
        vector<int> left(n, -1), right(n, n);
        for (int i = 0; i < n; ++i) {
            while (!monoStk.empty() && heights[monoStk.back()] >= heights[i]) {
                right[monoStk.back()] = i;
                monoStk.pop_back();
            }
            if (!monoStk.empty())
                left[i] = monoStk.back();
            monoStk.emplace_back(i);
        }
        for (int i = 0; i < n; ++i) {
            ans = max(ans, (right[i] - left[i] - 1) * heights[i]);
        }
        return ans;
    }
};

int main() {
    vector<int> x{2, 1, 5, 6, 2, 3};
    cout << Solution().largestRectangleArea(x);
    return 0;
}