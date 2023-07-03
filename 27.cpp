//
// Created by ChanvoBook on 2023/7/1.
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
    int removeElement(vector<int> &nums, int val) {
        int count = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != val) {
                swap(nums[i], nums[count]);
                count++;
            }
        }
        return count;
    }
};

int main() {
    vector<int> x{0, 1, 2, 2, 3, 0, 4, 2};
    cout << Solution().removeElement(x, 2);
    return 0;
}