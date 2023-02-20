//
// Created by Chanvo on 2022/12/21.
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

using namespace std;

class Solution {
public:
    int maximumScore(int a, int b, int c) {
        int sum = a + b + c;
        int maxVal = max({a, b, c});
        if (sum - maxVal < maxVal) {
            return sum - maxVal;
        }
        return sum / 2;
    }
};

int main() {
    cout << Solution().maximumScore(4, 4, 6);
    return 0;
}
