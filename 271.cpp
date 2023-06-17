//
// Created by ChanvoBook on 2023/6/5.
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
    /*
     * @param strs: a list of strings
     * @return: encodes a list of strings to a single string.
     */
    string encode(vector<string> &strs) {
        // write your code here
        string str;
        for (int i = 0; i < strs.size(); ++i) {
            auto s = strs[i];
            for (int i = 0; i < s.size(); ++i) {
                if (s[i] == '/') {
                    str += "//";
                } else {
                    str += s[i];
                }
            }
            if (i != strs.size() - 1)
                str += "/s";
        }
        return str;
    }

    /*
     * @param str: A string
     * @return: dcodes a single string to a list of strings
     */
    vector<string> decode(string &str) {
        // write your code here
        vector<string> decodes;
        bool preRod = false;
        string tmp;
        for (int i = 0; i < str.size(); ++i) {
            if (preRod) {
                if (str[i] == '/') {
                    tmp += '/';
                } else if (str[i] == 's') {
                    decodes.push_back(tmp);
                    tmp = "";
                }
                preRod = false;
            } else if (str[i] == '/') {
                preRod = true;
            } else {
                tmp += str[i];
            }
        }
        decodes.push_back(tmp);
        return decodes;
    }
};

int main() {
    vector<string> x{"abc/s", "/s/", "/sd/", "ss/s///sf//v"};
    string encoded = Solution().encode(x);
    cout << encoded << endl;
    auto d = Solution().decode(encoded);
    for (const auto &i: d) {
        cout << i << endl;
    }
    return 0;
}