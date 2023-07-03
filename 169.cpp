//
// Created by ChanvoBook on 2023/7/2.
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
    int majorityElement(vector<int> &nums) {
        int ans = nums[0], count = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (count == 0)
                ans = nums[i];
            if (nums[i] == ans)
                count++;
            else
                count--;
        }
        return ans;
    }
};

int main() {

    return 0;
}