//
// Created by Chanvo on 2023/2/6.
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
    int subsetXORSum(vector<int> &nums) {
        int ans, sum = 0;
        for (int i = 0; i < (1 << nums.size()); ++i) {
            ans = 0;
            for (int j = 0; j < nums.size(); ++j) {
                if (i & (1 << j))
                    ans ^= nums[j];
            }
            sum += ans;
        }
        return sum;
    }
};

int main() {

    return 0;
}