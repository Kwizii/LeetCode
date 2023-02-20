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
    bool isPerfectSquare(int num) {
        unsigned long long i = 1;
        for (; i <= num; i++) {
            unsigned long long r = i * i;
            if (r == num)
                return true;
            if (r > num)
                return false;
        }
        return false;
    }
};

int main() {

    return 0;
}