//
// Created by Chanvo on 2022/12/20.
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

using namespace std;

class Solution {
public:
    int minimumSize(vector<int> &nums, int maxOperations) {
        int l = 1, r = *max_element(begin(nums), end(nums));
        while (l < r) {
            const int m = l + (r - l) / 2;
            int ops = 0;
            for (int x: nums)
                ops += (x - 1) / m;
            if (ops <= maxOperations)
                r = m;
            else
                l = m + 1;
        }
        return l;
    }
};

int main() {
    vector<int> n = {9};
//    cout << *max_element(n.begin(), n.end());
    Solution().minimumSize(n, 2);

    return 0;
}