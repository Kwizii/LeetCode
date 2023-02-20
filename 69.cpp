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
    int mySqrt(int x) {
        if (x == 0 || x == 1)
            return x;
        unsigned long long i;
        for (i = 1; i < x; ++i) {
            unsigned long long p = i * i;
            if (p == x)
                return i;
            if (p > x) {
                break;
            }
        }
        return i - 1;
    }
};

int main() {
    cout << Solution().mySqrt(2);
    return 0;
}