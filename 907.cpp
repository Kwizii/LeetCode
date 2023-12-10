//
// Created by ChanvoBook on 2023/11/29.
//
#include "iostream"
#include "queue"
#include "deque"
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
    int sumSubarrayMins(vector<int> &arr) {
        int n = arr.size();
        long long ans = 0;
        long long mod = 1e9 + 7;
        vector<int> monoStack;
        vector<int> left(n), right(n);
        for (int i = 0; i < n; ++i) {
            while (!monoStack.empty() && arr[i] <= arr[monoStack.back()])
                monoStack.pop_back();
            left[i] = i - (monoStack.empty() ? -1 : monoStack.back());
            monoStack.emplace_back(i);
        }
        monoStack.clear();
        for (int i = n - 1; i >= 0; --i) {
            while (!monoStack.empty() && arr[i] < arr[monoStack.back()])
                monoStack.pop_back();
            right[i] = (monoStack.empty() ? n : monoStack.back()) - i;
            monoStack.emplace_back(i);
        }
        for (int i = 0; i < n; ++i) {
            ans = (ans + (long long) left[i] * right[i] * arr[i]) % mod;
        }
        return ans;
    }
};

int main() {
    vector<int> arr{11, 81, 94, 43, 3};
    cout << Solution().sumSubarrayMins(arr);
    return 0;
}