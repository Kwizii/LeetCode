//
// Created by ChanvoBook on 2023/4/12.
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
    double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2) {
        int m = nums1.size(), n = nums2.size();
        int i = 0, j = 0, mid = (m + n) / 2, flag = 0;
        while (i + j != mid) {
            if (i == m) {
                flag = 0;
                j++;
                continue;
            } else if (j == n) {
                flag = 1;
                i++;
                continue;
            }
            if (nums1[i] > nums2[j]) {
                j++;
                flag = 1;
            } else {
                i++;
                flag = 0;
            }
        }
        if (flag == 0) {
            cout << nums1[j];
        } else {
            cout << nums2[i];
        }
        return 0;
    }
};

int main() {
    vector<int> nums1 = {1, 3, 4, 6, 8};
    vector<int> nums2 = {2, 6};
    Solution().findMedianSortedArrays(nums1, nums2);
    return 0;
}