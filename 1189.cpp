//
// Created by ChanvoBook on 2023/7/3.
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
    int maxNumberOfBalloons(string text) {
        int b = 0, a = 0, l = 0, o = 0, n = 0;
        for (const auto &c: text) {
            switch (c) {
                case 'a':
                    a++;
                    continue;
                case 'b':
                    b++;
                    continue;
                case 'l':
                    l++;
                    continue;
                case 'o':
                    o++;
                    continue;
                case 'n':
                    n++;
                    continue;
                default:
                    continue;
            }
        }
        int p1 = min(a, b);
        p1 = min(p1, n);
        int p2 = min(l, o);
        return min(p1, p2 / 2);
    }
};

int main() {

    return 0;
}