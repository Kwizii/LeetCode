//
// Created by Chanvo on 2023/2/6.
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
    bool hasAlternatingBits(int n) {
        while (n) {
            if ((n & 3) == 3 || (n & 3) == 0)
                return false;
            n >>= 1;
        }
        return true;
    }
};

int main() {

    return 0;
}