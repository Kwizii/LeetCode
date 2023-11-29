//
// Created by ChanvoBook on 2023/11/28.
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
    int cnt_s[58] = {0}, cnt_t[58] = {0};

    bool isOk() {
        for (int i = 0; i < 58; ++i) {
            if (cnt_s[i] < cnt_t[i])
                return false;
        }
        return true;
    }

    string minWindow(string s, string t) {
        for (const auto &c: t)
            cnt_t[c - 'A']++;
        int l = 0, r = 0, ansL = -1;
        int min = s.size() + 1;
        bool flag;
        while (r < int(s.size())) {
            if (t.find(s[r]) != -1)
                cnt_s[s[r] - 'A']++;
            r++;
            flag = false;
            while (isOk()) {
                flag = true;
                if (t.find(s[l]) != -1)
                    cnt_s[s[l] - 'A']--;
                l++;
            }
            if (flag && r - l + 1 < min) {
                min = r - l + 1;
                ansL = l - 1;
            }
        }
        return ansL == -1 ? "" : s.substr(ansL, min);
    }
};

int main() {
//    cout << Solution().minWindow("ADOBECODEBANC", "ABC");
    string s = "ggbond";
    int i = 1;
    long x = i;
    int g = INT_MAX;
    cout << g << endl;
    printf("%ld", x);
    return 0;
}
