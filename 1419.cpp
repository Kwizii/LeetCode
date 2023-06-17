//
// Created by ChanvoBook on 2023/5/6.
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
    int minNumberOfFrogs(string croakOfFrogs) {
        int maxCnt = 1;
        vector<stack<char>> stacks;
        unordered_map<char, char> next;
        next.insert({'k', 'a'});
        next.insert({'a', 'o'});
        next.insert({'o', 'r'});
        next.insert({'r', 'c'});
        for (const auto &c: croakOfFrogs) {
            bool flag = false;
            for (int i = stacks.size() - 1; i >= 0; --i) {
                if (stacks[i].top() == next[c]) {
                    flag = true;
                    if (c == 'k') {
                        stacks.erase(stacks.begin() + i);
                    } else
                        stacks[i].push(c);
                    break;
                }
            }
            if (flag)
                continue;
            if (c != 'c')
                return -1;
            stack<char> s;
            s.push(c);
            stacks.push_back(s);
            maxCnt = max(maxCnt, (int) stacks.size());
        }
        if (!stacks.empty())
            return -1;
        return maxCnt;
    }
};

int main() {
    cout << Solution().minNumberOfFrogs("");
    return 0;
}