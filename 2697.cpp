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
    string makeSmallestPalindrome(string s) {
        for (int i = 0, j = s.size() - 1; i < j; ++i, --j) {
            if (s[i] == s[j])
                continue;
            char m = min(s[i], s[j]);
            s[i] = m;
            s[j] = m;
        }
        return s;
    }
};

int main() {

    return 0;
}