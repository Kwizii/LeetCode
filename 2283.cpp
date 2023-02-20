//
// Created by Chanvo on 2023/1/11.
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

using namespace std;

class Solution {
public:
    bool digitCount(string num) {
        vector<int> cnts(10);
        fill(cnts.begin(), cnts.end(), 0);
        for (int i = 0; i < num.size(); ++i) {
            cnts[num[i] - '0']++;
            if (num[i] - '0' < cnts[i])
                return false;
        }
        for (int i = 0; i < num.size(); ++i) {
            if (num[i] - '0' != cnts[i])
                return false;
        }
        return true;
    }
};

int main() {
    cout << Solution().digitCount("1210");
    return 0;
}