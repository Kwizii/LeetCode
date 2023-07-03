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
    bool canPlaceFlowers(vector<int> &flowerbed, int n) {
        flowerbed.insert(flowerbed.begin(), 0);
        flowerbed.push_back(0);
        for (int i = 1; i < flowerbed.size() - 1; ++i) {
            if (n == 0)
                return true;
            if (!flowerbed[i - 1] && !flowerbed[i] && !flowerbed[i + 1]) {
                flowerbed[i] = 1;
                n--;
            }
        }
        return !n;
    }
};

int main() {
    vector<int> x{1, 0, 0, 0, 0, 1};
    cout << Solution().canPlaceFlowers(x, 2);
    return 0;
}