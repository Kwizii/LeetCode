//
// Created by Chanvo on 2023/1/13.
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
    int rearrangeCharacters(string s, string target) {
        int cnt1[26], cnt2[26];
        fill(cnt1, cnt1 + 26, 0);
        fill(cnt2, cnt2 + 26, 0);
        for (auto c: s)
            cnt1[c - 'a']++;
        for (auto c: target)
            cnt2[c - 'a']++;
        int min_ = 1000;
        for (int i = 0; i < 26; ++i) {
            if (cnt2[i] == 0)
                continue;
            int x = cnt1[i] / cnt2[i];
            if (x == 0)
                return 0;
            min_ = min(min_, x);
        }
        return min_;
    }
};

int main() {
    cout << Solution().rearrangeCharacters("abbaccaddaeea", "aaaaa");
    return 0;
}