//
// Created by ChanvoBook on 2023/4/18.
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
    vector<vector<string>> groupAnagrams(vector<string> &strs) {
        unordered_map<string, vector<string>> umap;
        for (const auto &str: strs) {
            string key(26, 0);
            for (const auto &c: str)key[c - 'a']++;
            umap[key].emplace_back(str);
        }
        vector<vector<string>> ans(umap.size());
        int i = 0;
        for (const auto &[_, v]: umap)
            ans[i++] = v;
        return ans;
    }
};

int main() {
    vector<string> x{"eat", "tea", "tan", "ate", "nat", "bat"};
    Solution().groupAnagrams(x);
    return 0;
}