//
// Created by Chanvo on 2023/2/9.
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

using namespace std;

class Solution {
public:
    double myPow(double x, int n) {
        if (x == 1)
            return 1;
        if (n == 0)
            return 1;
        double ans = x;
        for (int i = 1; i < abs(n); ++i) {
            ans *= x;
        }
        return n > 0 ? ans : 1 / ans;
    }
};

int main() {

    return 0;
}