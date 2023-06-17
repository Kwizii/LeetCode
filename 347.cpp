//
// Created by ChanvoBook on 2023/6/3.
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

//class Solution {
//public:
//    static bool compare(const pair<int, int> &a, const pair<int, int> &b) {
//        return a.second > b.second;
//    }
//
//    vector<int> topKFrequent(vector<int> &nums, int k) {
//        unordered_map<int, int> umap;
//        for (const auto &num: nums) {
//            umap[num]++;
//        }
//        vector<pair<int, int>> vec(umap.begin(), umap.end());
//        sort(vec.begin(), vec.end(), compare);
//        vector<int> ans(k);
//        for (int i = 0; i < k; ++i) {
//            ans[i] = vec[i].first;
//        }
//        return ans;
//    }
//};

class Solution {
public:
    vector<int> topKFrequent(vector<int> &nums, int k) {
        int n = nums.size();

        unordered_map<int, int> m;
        for (int i = 0; i < n; i++) {
            m[nums[i]]++;
        }

        vector<vector<int>> buckets(n + 1);
        for (auto it = m.begin(); it != m.end(); it++) {
            buckets[it->second].push_back(it->first);
        }

        vector<int> result;

        for (int i = n; i >= 0; i--) {
            if (result.size() >= k) {
                break;
            }
            if (!buckets[i].empty()) {
                result.insert(result.end(), buckets[i].begin(), buckets[i].end());
            }
        }

        return result;
    }
};

int main() {
    vector<int> nums = {1, 1, 1, 2, 2, 3};
    Solution().topKFrequent(nums, 2);
    return 0;
}