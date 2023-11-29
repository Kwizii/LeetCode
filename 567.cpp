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
    bool checkInclusion(string s1, string s2) {
        int cnt[26] = {0};
        for (const auto &c: s1)
            cnt[c - 'a']++;
        int len1 = s1.size(), len2 = s2.size();
        int l = 0, r = 0;
        while (r < len2) {
            int cur = s2[r++] - 'a';
            cnt[cur]--;
            while (l < r && cnt[cur] < 0) {
                cnt[s2[l++] - 'a']++;
            }
            if (r - l == len1)
                return true;
        }
        return false;
    }
};

int main() {
    cout << Solution().checkInclusion("adc", "dcda") << endl;
    // vector对象多占用24个字节存储容器信息
    vector<int> x1(26);
    cout << sizeof(x1);
    return 0;
}