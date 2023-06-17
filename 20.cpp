//
// Created by ChanvoBook on 2023/6/17.
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
    bool isValid(string s) {
        stack<char> stk;
        for (const auto &c: s) {
            if (c == '(' || c == '[' || c == '{') {
                stk.push(c);
                continue;
            }
            if (stk.empty())
                return false;
            char top = stk.top();
            if ((c == ')' && top == '(') || (c == ']' && top == '[') || (c == '}' && top == '{')) {
                stk.pop();
            } else
                return false;
        }
        return stk.empty();
    }
};

int main() {
    Solution().isValid(")");
    return 0;
}