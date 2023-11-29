//
// Created by ChanvoBook on 2023/7/9.
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
    int countPalindromicSubsequence(string s) {
        vector<pair<int, int>> v(26, {-1, -1});
        for (int i = 0; i < s.size(); i++) {
            if (v[s[i] - 'a'].first == -1) v[s[i] - 'a'].first = i;
            else v[s[i] - 'a'].second = i;
        }
        int res = 0;
        for (int i = 0; i < 26; i++) {
            if (v[i].second != -1) {
                unordered_set<char> tmp;
                for (int j = v[i].first + 1; j < v[i].second; j++) tmp.insert(s[j]);
                res += tmp.size();
            }
        }
        return res;
//        pair<int, int> pairs[26];
//        fill(pairs, pairs + 26, make_pair(-1, -1));
//        for (int i = 0; i < s.size(); ++i) {
//            int cur = s[i] - 'a';
//            if (pairs[cur].first == -1)
//                pairs[cur].first = i;
//            pairs[cur].second = i;
//        }
//        int counts[26] = {0};
//        for (char c: s) {
//            counts[c - 'a']++;
//        }
//        int ans = 0;
//        for (auto &pair: pairs) {
//            if (pair.first != pair.second) {
//                int tmp[26];
//                copy(counts, counts + 26, tmp);
//                for (int j = 0; j <= pair.first; ++j) {
//                    tmp[s[j] - 'a']--;
//                }
//                for (int j = s.size() - 1; j >= pair.second; --j) {
//                    tmp[s[j] - 'a']--;
//                }
//                for (int c: tmp) {
//                    if (c > 0)
//                        ans++;
//                }
//            }
//        }
//        return ans;
    }
};

int main() {
    cout << Solution().countPalindromicSubsequence("bbcbaba");
    return 0;
}