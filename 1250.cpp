//
// Created by Chanvo on 2023/2/15.
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

using namespace std;

class Solution {
public:
    bool isGoodArray(vector<int> &nums) {
        int ans = nums[0];
        for (int i = 1; i < nums.size(); ++i) {
            ans = gcd(ans, nums[i]);
            if (ans == 1)
                break;
        }
        return ans == 1;
    }
};

int main() {

    return 0;
}