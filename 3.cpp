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
#include "unordered_map"

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i = 0, j = 0, ans = 0;
        unordered_map<char, int> cnt;
        for (; j < s.size(); j++) {
            cnt[s[j]]++;
            while (cnt[s[j]] > 1)
                cnt[s[i++]]--;
            ans = max(ans, j - i + 1);
        }
        return ans;
    }
};

int main() {
    cout << Solution().lengthOfLongestSubstring("abcabcbb");
    return 0;
}