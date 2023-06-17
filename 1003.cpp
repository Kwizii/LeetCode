//
// Created by ChanvoBook on 2023/5/3.
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
        size_t idx;
        while ((idx = s.find("abc")) != s.npos)
            s.replace(idx, 3, "");
        return !s.size();
    }
};

int main() {
    cout << Solution().isValid("abcabcababcc");
    return 0;
}