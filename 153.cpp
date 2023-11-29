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
    int findMin(vector<int> &nums) {
        return *min_element(nums.begin(), nums.end());
    }
};

int main() {
    return 0;
}
