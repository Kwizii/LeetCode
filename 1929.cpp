//
// Created by ChanvoBook on 2023/6/19.
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
    vector<int> getConcatenation(vector<int> &nums) {
        nums.insert(nums.end(), nums.begin(), nums.end());
        return nums;
    }
};

int main() {

    return 0;
}