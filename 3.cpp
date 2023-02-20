//
// Created by Chanvo on 2023/2/14.
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

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        int l = 0, r = 0;
        unordered_map<char, int> cnt;
        for (; r < s.size(); r++) {
            if (cnt.count(s[r]) > 0)
                cnt[s[r]]++;
            else
                cnt[s[r]] = 1;
            while (cnt[s[r]] > 1)
                cnt[s[l++]]--;
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};

int main() {
    cout << Solution().lengthOfLongestSubstring("abcabcbb");
    return 0;
}