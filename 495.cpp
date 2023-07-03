//
// Created by ChanvoBook on 2023/7/2.
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
    int findPoisonedDuration(vector<int> &timeSeries, int duration) {
        int cnt = duration;
        for (int i = 1; i < timeSeries.size(); ++i) {
            int diff = timeSeries[i] - timeSeries[i - 1];
            if (diff >= duration)
                cnt += duration;
            else
                cnt += diff;
        }
        return cnt;
    }
};

int main() {

    return 0;
}