//
// Created by ChanvoBook on 2023/4/20.
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
    int makeArrayIncreasing(vector<int> &arr1, vector<int> &arr2) {
        sort(arr2.begin(), arr2.end());
        int i = 1, j = 0, cnt = 0;
        while (j < arr2.size() && i < arr1.size()) {
            for (int k = i; k < arr1.size() - 1; ++k) {
                if (arr1[k] <= arr1[k - 1] || arr1[k] >= arr1[k + 1]) {
                    while (j < arr2.size() && arr2[j] <= arr1[k - 1])
                        j++;
                    if (j == arr2.size())
                        return -1;
                    arr1[k] = arr2[j];
                    cnt++;
                }
            }
        }
        return cnt;
    }
};

int main() {
    vector<int> a{1, 5, 3, 6, 7}, b{1, 3, 2, 4};
    cout << Solution().makeArrayIncreasing(a, b);
    return 0;
}