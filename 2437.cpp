//
// Created by ChanvoBook on 2023/5/9.
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
    int countTime(string time) {
        int r1 = 1, r2 = 1;
        if (time[0] == '?' && time[1] == '?')
            r1 = 24;
        else if (time[0] == '?') {
            if (time[1] <= '3')
                r1 = 3;
            else
                r1 = 2;
        } else if (time[1] == '?') {
            if (time[0] < '2')
                r1 = 10;
            else
                r1 = 4;
        }
        if (time[3] == '?' && time[4] == '?')
            r2 = 60;
        else if (time[3] == '?')
            r2 = 6;
        else if (time[4] == '?')
            r2 = 10;
        return r1 * r2;
    }
};

int main() {

    return 0;
}