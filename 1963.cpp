//
// Created by ChanvoBook on 2023/7/10.
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
#include "list"
#include "sstream"

using namespace std;

class Solution {
public:
    int minSwaps(string s) {
        int cnt = 0, mincnt = 0;
        for (char ch: s) {
            if (ch == '[') {
                cnt += 1;
            } else {
                cnt -= 1;
                mincnt = min(mincnt, cnt);
            }
        }
        return (-mincnt + 1) / 2;
    }
};

int main() {
    cout << Solution().minSwaps("]]][[[");
    return 0;
}