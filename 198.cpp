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
    int rob(vector<int> &nums) {
        int cur = 0, pre = 0;
        for (auto i: nums) {
            int next = max(cur, pre + i);
            pre = cur;
            cur = next;
        }
        return cur;
    }
};

int main() {

    return 0;
}