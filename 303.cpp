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

class NumArray {
public:
    vector<int> prefix_sum;

    NumArray(vector<int> &nums) {
        int sum = 0;
        for (const auto &num: nums) {
            sum += num;
            prefix_sum.push_back(sum);
        }
    }

    int sumRange(int left, int right) {
        if (left > 0)
            return prefix_sum[right] - prefix_sum[left - 1];
        return prefix_sum[right];
    }
};

int main() {

    return 0;
}