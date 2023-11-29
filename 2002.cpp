//
// Created by ChanvoBook on 2023/7/12.
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
#include "list"
#include "sstream"

using namespace std;

class Solution {
public:
    int ans = 0;

    int maxProduct(string s) {
        string s1, s2;
        dfs(s, s1, s2, 0);
        return ans;
    }

    void dfs(string &s, string &s1, string &s2, int index) {
        if (check(s1) && check(s2)) ans = max(ans, int(s1.size() * s2.size()));
        if (index == s.size()) return;
        s1.push_back(s[index]);
        dfs(s, s1, s2, index + 1);
        s1.pop_back();
        s2.push_back(s[index]);
        dfs(s, s1, s2, index + 1);
        s2.pop_back();
        dfs(s, s1, s2, index + 1);
    }

    bool check(string &s) {
        int l = 0, r = s.size() - 1;
        while (l < r) {
            if (s[l++] != s[r--]) return false;
        }
        return true;
    }
//    int maxProduct(string s) {
//        unordered_map<int, int> umap;
//        int n = s.size();
//        for (int i = 0; i < 1 << n; ++i) {
//            string str;
//            for (int j = 0; j < n; ++j) {
//                if (i & 1 << j)
//                    str += s[j];
//            }
//            string rstr(str);
//            reverse(rstr.begin(), rstr.end());
//            if (str == rstr)
//                umap[i] = str.size();
//        }
//        int ans = 0;
//        for (const auto &p1: umap) {
//            for (const auto &p2: umap) {
//                if (!(p1.first & p2.first)) {
//                    ans = max(p1.second * p2.second, ans);
//                }
//            }
//        }
//        return ans;
//    }
};

int main() {
    cout << Solution().maxProduct("leetcodecom");
    return 0;
}