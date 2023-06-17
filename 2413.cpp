//
// Created by ChanvoBook on 2023/4/21.
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
    int smallestEvenMultiple(int n) {
        if (n & 1)
            return n << 1;
        return n;
    }
};

int main() {

    return 0;
}