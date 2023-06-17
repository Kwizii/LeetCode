//
// Created by ChanvoBook on 2023/6/3.
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
    bool isAnagram(string s, string t) {
        int cnt[26] = {0};
        for (const auto &c: s) {
            cnt[c - 'a']++;
        }
        for (const auto &c: t) {
            cnt[c - 'a']--;
        }
        for (const auto &c: cnt) {
            if (c != 0)
                return false;
        }
        return true;
    }
};

int main() {

    return 0;
}