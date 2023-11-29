//
// Created by ChanvoBook on 2023/11/17.
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
    // 单次交易的最大利润
    int maxProfit(vector<int> &prices) {
        int profit = 0, minP = INT_MAX;
        for (int price: prices) {
            minP = min(price, minP);
            profit = max(profit, price - minP);
        }
        return profit;
    }

    // 多次交易的最大利润
/*
    int maxProfit(vector<int> &prices) {
        int prev, profit = 0;
        int i = 0, j;
        while (i < prices.size() - 1) {
            prev = 0;
            for (j = i + 1; j < prices.size(); j++) {
                int tmp = prices[j] - prices[i];
                if (tmp <= 0) {
                    break;
                }
                prev = max(tmp, prev);
            }
            profit += prev;
            i = j;
        }
        return profit;
    }
*/
};

int main() {
    vector<int> x{2};
    cout << Solution().maxProfit(x);
    return 0;
}