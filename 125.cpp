//
// Created by ChanvoBook on 2023/6/12.
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

    bool isLetter(char x) {
        return (x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z') || (x >= '0' && x <= '9');
    }

    bool isPalindrome(string s) {
        int i = 0, j = s.size() - 1;
        while (i < j) {
            if (!isLetter(s[i])) {
                i++;
                continue;
            }
            if (!isLetter(s[j])) {
                j--;
                continue;
            }
            if (tolower(s[i]) != tolower(s[j]))
                return false;
            i++;
            j--;
        }
        return true;
    }
};

int main() {
    Solution().isPalindrome("0P");
    return 0;
}
