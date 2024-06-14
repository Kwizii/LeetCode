//
// Created by ChanvoBook on 2023/12/13.
//
#include "iostream"
#include "queue"
#include "deque"
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
#include "structs.cpp"

using namespace std;

class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;

    void backtracking(int n, int k, int start) {
        if (path.size() == k) {
            ans.emplace_back(path);
            return;
        }
        for (int i = start; i < n; ++i) {
            path.emplace_back(i + 1);
            backtracking(n, k, i + 1);
            path.pop_back();
        }
    }

    vector<vector<int>> combine(int n, int k) {
        backtracking(n, k, 0);
        return ans;
    }
};

int main() {

    return 0;
}