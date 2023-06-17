//
// Created by ChanvoBook on 2023/5/2.
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
    vector<int> powerfulIntegers(int x, int y, int bound) {
        vector<int> xx = {1}, yy = {1};
        while (xx.back() < bound && x != 1)
            xx.push_back(xx.back() * x);
        while (yy.back() < bound && y != 1)
            yy.push_back(yy.back() * y);
        set<int> s;
        for (int i: xx) {
            for (int j: yy) {
                int tmp = i + j;
                if (tmp <= bound) {
                    s.insert(tmp);
                } else {
                    break;
                }
            }
        }
        vector<int> ans(s.begin(), s.end());
        return ans;
    }
};

int main() {

    return 0;
}