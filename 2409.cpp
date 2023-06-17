//
// Created by ChanvoBook on 2023/4/17.
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
    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int toDay(string date) {
        int month = stoi(date.substr(0, 2));
        int day = stoi(date.substr(3, 2));
        int n = 0;
        for (int i = 0; i < month - 1; ++i)
            n += months[i];
        n += day;
        return n;
    }

    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        int r = min(toDay(leaveAlice), toDay(leaveBob));
        int l = max(toDay(arriveAlice), toDay(arriveBob));
        return l > r ? 0 : r - l + 1;
    }
};

int main() {
    cout << Solution().toDay("08-15");
    return 0;
}