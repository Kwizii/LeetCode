//
// Created by Chanvo on 2022/12/17.
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

using namespace std;

class Solution {
public:
    bool canChoose(vector<vector<int>> &groups, vector<int> &nums) {
        int i = 0;
        for (auto group: groups) {
            if (group.size() > nums.size())
                return false;
            int matched = 0;
            for (; i < nums.size() - group.size() + 1; ++i) {
                int flag = 1;
                for (int j = 0; j < group.size(); ++j) {
                    if (nums[i + j] != group[j]) {
                        flag = 0;
                        break;
                    }
                }
                if (flag) {
                    matched = 1;
                    break;
                }
            }
            if (!matched)
                return false;
            else
                i += group.size();
        }
        return true;
    }
};

int main() {
    return 0;
}