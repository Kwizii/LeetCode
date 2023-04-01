//
// Created by ChanvoBook on 2023/4/1.
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
    string maskPII(string s) {
        int atIdx = s.find('@');
        if (atIdx != -1) {
            s.replace(1, atIdx - 2, "*****");
            transform(s.begin(), s.end(), s.begin(), ::tolower);
            return s;
        } else {
            string ns = "";
            for (auto c: s)
                if (c >= '0' && c <= '9')
                    ns += c;
            string last = ns.substr(ns.length() - 4, 4);
            int pre = ns.length() - 10;
            string result;
            if (pre > 0) {
                result += "+";
                for (int i = 0; i < pre; ++i)
                    result += '*';
                result += '-';
            }
            result += "***-***-" + last;
            return result;
        }
    }
};

int main() {
//    cout << x.replace(1, 4, "*****");
    cout << Solution().maskPII("86-(10)12345678");
    return 0;
}