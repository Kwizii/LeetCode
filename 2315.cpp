//
// Created by Chanvo on 2023/1/29.
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
    int countAsterisks(string s) {
        int cnt = 0;
        bool flag = false;
        for (char i: s) {
            if (!flag && i == '*')
                cnt++;
            else if (i == '|')
                flag = !flag;
        }
        return cnt;
    }
};

int main() {

    return 0;
}