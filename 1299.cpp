//
// Created by ChanvoBook on 2023/6/30.
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
    vector<int> replaceElements(vector<int> &arr) {
        vector<int> ans(arr.size());
        ans[arr.size() - 1] = -1;
        for (int i = arr.size() - 2; i >= 0; --i) {
            ans[i] = max(ans[i + 1], arr[i + 1]);
        }
        return ans;
    }
};

int main() {

    return 0;
}