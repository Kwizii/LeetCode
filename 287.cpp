//
// Created by ChanvoBook on 2023/12/8.
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
#include "structs.cpp"

using namespace std;

class Solution {
public:
    int findDuplicate(vector<int> &nums) {
        int low = 0, fast = 0;
        while (low != fast || fast == 0) {
            low = nums[low];
            fast = nums[nums[fast]];
        }
        fast = 0;
        while (low != fast) {
            low = nums[low];
            fast = nums[fast];
        }
        return low;
    }
};

int main() {
    vector<int> x{3, 1, 3, 4, 2};
    cout << Solution().findDuplicate(x);
    return 0;
}