//
// Created by Chanvo on 2023/1/15.
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

using namespace std;

class Solution {
public:
//    int minMaxGame(vector<int> &nums) {
//        vector<int> newNum(nums.size() / 2);
//        while (nums.size() != 1) {
//            for (int i = 0; i < newNum.size(); ++i) {
//                if (i % 2 == 0)
//                    newNum[i] = min(nums[2 * i], nums[2 * i + 1]);
//                else
//                    newNum[i] = max(nums[2 * i], nums[2 * i + 1]);
//            }
//            nums = newNum;
//            newNum.resize(nums.size() / 2);
//        }
//        return nums[0];
//    }
//    int minMaxGame(vector<int> &nums) {
//        int n = nums.size();
//        if (n == 1) {
//            return nums[0];
//        }
//        vector<int> newNums(n / 2);
//        for (int i = 0; i < newNums.size(); i++) {
//            if (i % 2 == 0) {
//                newNums[i] = min(nums[2 * i], nums[2 * i + 1]);
//            } else {
//                newNums[i] = max(nums[2 * i], nums[2 * i + 1]);
//            }
//        }
//        return minMaxGame(newNums);
//    }
    int minMaxGame(vector<int> &nums) {
        int n = nums.size();
        while (n != 1) {
            int m = n / 2;
            for (int i = 0; i < m; i++)
                if (i % 2 == 0)
                    nums[i] = min(nums[2 * i], nums[2 * i + 1]);
                else
                    nums[i] = max(nums[2 * i], nums[2 * i + 1]);
            n = m;
        }
        return nums[0];
    }
};

int main() {
    vector<int> v = {10, 11, 12, 13, 14, 15, 16, 1, 3, 5, 2, 4, 8, 2, 2, 9};
//    vector<int> d = {1, 2};
//    d = v;
//    cout << d.size();
    cout << Solution().minMaxGame(v);
    return 0;
}