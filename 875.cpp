//
// Created by ChanvoBook on 2023/11/16.
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
    bool ok(vector<int> &piles, int h, int k) {
        long long tmp = 0;
        for (const auto &pile: piles)
            tmp += pile % k ? pile / k + 1 : pile / k;
        if (tmp <= h)
            return true;
        return false;
    }

    int minEatingSpeed(vector<int> &piles, int h) {
        sort(piles.begin(), piles.end());
        long i = 1, j = piles.back();
        while (i <= j) {
            long mid = i + (j - i) / 2;
            if (ok(piles, h, mid)) {
                j = mid - 1;
            } else {
                i = mid + 1;
            }
        }
        return i;
    }
};

int main() {
    vector x = {3, 6, 7, 11};
    cout << Solution().minEatingSpeed(x, 8);
    return 0;
}
