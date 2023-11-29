//
// Created by ChanvoBook on 2023/11/16.
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
    int search(vector<int> &nums, int target) {
        int i = 0, j = nums.size() - 1;
        while (i <= j) {
            int mid = i + (j - i) / 2;
            if (nums[mid] == target)
                return mid;
            if (nums[i] <= nums[mid]) {
                if (nums[i] <= target && target < nums[mid])
                    j = mid - 1;
                else
                    i = mid + 1;
            } else {
                if (nums[j] >= target && target > nums[mid])
                    i = mid + 1;
                else
                    j = mid - 1;
            }
        }
        return -1;
    }
};

int main() {
    vector<int> x{4, 5, 6, 7, 8, 1, 2, 3};
    Solution().search(x, 8);
    return 0;
}
