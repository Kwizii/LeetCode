//
// Created by ChanvoBook on 2023/7/4.
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
#include "list"
#include "sstream"

using namespace std;

class Solution {
public:
    void sortColors(vector<int> &nums) {
        int p0 = 0, p1 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                swap(nums[i], nums[p0]);
                if (p0 < p1)
                    swap(nums[i], nums[p1]);
                p0++;
                p1++;
            } else if (nums[i] == 1) {
                swap(nums[i], nums[p1]);
                p1++;
            }
        }
    }
};

int main() {
    vector<int> x{2, 0, 2, 1, 1, 0};
    Solution().sortColors(x);
    return 0;
}