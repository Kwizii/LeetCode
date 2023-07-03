//
// Created by ChanvoBook on 2023/7/3.
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
    vector<int> findDisappearedNumbers(vector<int> &nums) {
        vector<int> ans;
        for (const auto &num: nums) {
            int cur = abs(num);
            nums[cur - 1] = -abs(nums[cur - 1]);
        }
        for (int i = 1; i <= nums.size(); ++i) {
            if (nums[i - 1] > 0)
                ans.push_back(i);
        }
        return ans;
    }
};

int main() {
    vector<int> x{4, 3, 2, 7, 8, 2, 3, 1};
    Solution().findDisappearedNumbers(x);
    return 0;
}
