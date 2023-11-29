//
// Created by ChanvoBook on 2023/11/20.
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
    int characterReplacement(string s, int k) {
        vector<int> num(26);
        int n = s.length();
        int maxn = 0;
        int left = 0, right = 0;
        while (right < n) {
            num[s[right] - 'A']++;
            maxn = max(maxn, num[s[right] - 'A']);
            if (right - left + 1 - maxn > k) {
                num[s[left] - 'A']--;
                left++;
            }
            right++;
        }
        return right - left;
    }
//    int characterReplacement(string s, int k) {
//        vector<int> paths[26];
//        for (int i = 0; i < s.size(); ++i) {
//            paths[s[i] - 'A'].emplace_back(i);
//        }
//        int ans = 0, l, r, tmp, diff, cur, len = s.size();
//        for (const auto &path: paths) {
//            for (l = 0; l < path.size(); ++l) {
//                r = l + 1, tmp = k, cur = 1;
//                while (r < path.size() && (diff = path[r] - path[r - 1] - 1) <= tmp) {
//                    tmp -= diff;
//                    cur += diff + 1;
//                    r++;
//                }
//                ans = max(ans, min(cur + tmp, len));
//                if (ans == len)
//                    return ans;
//            }
//        }
//        return ans;
//    }
};

int main() {
    cout << Solution().characterReplacement("AAABBCDDDD", 1);
    return 0;
}