//
// Created by Chanvo on 2023/1/9.
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

using namespace std;

class Solution {
public:
    int reinitializePermutation(int n) {
        if (n == 2)
            return 1;
        int step = 0, idx = 1;
        while (step == 0 || idx != 1) {
            if (idx < n / 2)
                idx = 2 * idx;
            else
                idx = 2 * (idx - n / 2) + 1;
            step += 1;
        }
        return step;
    }
};

int main() {
    cout << Solution().reinitializePermutation(1000);
    return 0;
}