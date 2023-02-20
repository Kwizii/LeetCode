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
#define maxn 1000001
    int f[maxn];
public:
    int numberOfSteps(int num) {
        f[0] = 0;
        for (int i = 1; i <= num; ++i) {
            if (i % 2 == 1) {
                f[i] = f[i - 1] + 1;
            } else {
                f[i] = f[i / 2] + 1;
            }
        }
        return f[num];
    }
};
// class Solution {
//public:
//    int numberOfSteps(int num) {
//        int cnt = 0;
//        while (num) {
//            if (num % 2 == 0)
//                num /= 2;
//            else
//                num -= 1;
//            cnt++;
//        }
//        return cnt;
//    }
//};

int main() {

    return 0;
}