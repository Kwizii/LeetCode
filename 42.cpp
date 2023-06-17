//
// Created by ChanvoBook on 2023/6/16.
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
    int trap(vector<int> &height) {
        int l = 0;
        int r = height.size() - 1;
        int lMax = height[l];
        int rMax = height[r];
        int ans = 0;
        while (l < r) {
            if (lMax <= rMax) {
                l++;
                lMax = max(lMax, height[l]);
                ans += lMax - height[l];
            } else {
                r--;
                rMax = max(rMax, height[r]);
                ans += rMax - height[r];
            }
        }
        return ans;
    }
};

int main() {
    vector<int> x{0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << Solution().trap(x);
    return 0;
}