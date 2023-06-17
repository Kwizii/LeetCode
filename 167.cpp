//
// Created by ChanvoBook on 2023/6/13.
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
    vector<int> twoSum(vector<int> &numbers, int target) {
        int i = 0, j = numbers.size() - 1;
        while (i < j) {
            int sum = numbers[i] + numbers[j];
            if (sum == target)
                return {i + 1, j + 1};
            if (sum > target)
                j--;
            else
                i++;
        }
        return {i + 1, j + 1};
    }
};

int main() {

    return 0;
}