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
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2) {
        unordered_map<int, int> umap;
        for (int i = 0; i < nums2.size(); ++i) {
            for (int j = i + 1; j < nums2.size(); ++j) {
                if (nums2[j] > nums2[i]) {
                    umap[nums2[i]] = nums2[j];
                    break;
                }
            }
            if (!umap.count(nums2[i]))
                umap[nums2[i]] = -1;
        }
        vector<int> ans(nums1.size());
        for (int i = 0; i < nums1.size(); ++i) {
            ans[i] = umap[nums1[i]];
        }
        return ans;
    }
};

int main() {

    return 0;
}