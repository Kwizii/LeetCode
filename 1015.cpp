//
// Created by ChanvoBook on 2023/5/10.
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
    static int BigMod(const string &s, int mod) {
        int res = 0;
        for (char i: s) {
            res = (res * 10 + (i - '0')) % mod;
        }
        return res;
    }

    int smallestRepunitDivByK(int k) {
        string dividend = "1";
        while (dividend.length() < 256) {
            if (BigMod(dividend, k) == 0) {
                return dividend.length();
            }
            dividend += "1";
        }
        return -1;
    }
};

int main() {
    cout << Solution().smallestRepunitDivByK(2);
    return 0;
}