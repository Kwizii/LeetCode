//
// Created by ChanvoBook on 2023/6/30.
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
private:
    vector<string> res;

    void dfs(const string &str, int l, int r) {
        if (l < 0 || l > r)
            return;
        if (l == 0 && r == 0) {
            res.emplace_back(str);
            return;
        }
        dfs(str + "(", l - 1, r);
        dfs(str + ")", l, r - 1);
    }

public:
    vector<string> generateParenthesis(int n) {
        dfs("", n, n);
        return res;
    }
};

int main() {
    auto x = Solution().generateParenthesis(3);
    printf("");
    return 0;
}