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
    int insertBits(int N, int M, int i, int j) {
        for (int k = 0; k <= j; ++k) {
            N &= ~((long long) 1 << k);
        }
        return N | (M << i);
    }
};

int main() {

    return 0;
}