//
// Created by ChanvoBook on 2023/7/1.
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
    int lengthOfLastWord(string s) {
        int j = s.size() - 1;
        while (j >= 0 && s[j] == ' ') {
            j--;
        }
        int ans = 0;
        while (j >= 0 && s[j] != ' ') {
            ans++;
            j--;
        }
        return ans;
    }
};

int main() {
    cout << Solution().lengthOfLastWord("Hello World");
    return 0;
}