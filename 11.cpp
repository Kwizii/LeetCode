//
// Created by ChanvoBook on 2023/4/13.
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
    int maxArea(vector<int> &height) {
        int m = 0;
        int i = 0, j = height.size() - 1;
        while (i < j) {
            int cur = (j - i) * min(height[i], height[j]);
            m = max(m, cur);
            if (height[i] <= height[j])
                i++;
            else
                j--;
        }
        return m;
    }
};

int main() {
    vector<int> h{1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << Solution().maxArea(h);
    return 0;
}