//
// Created by Chanvo on 2023/1/12.
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
    string evaluate(string s, vector<vector<string>> &knowledge) {
        unordered_map<string, string> m;
        for (auto &kv: knowledge)
            m[kv[0]] = kv[1];
        string key, res;
        bool addKey;
        for (char c: s) {
            if (c == '(') {
                addKey = true;
            } else if (c == ')') {
                addKey = false;
                auto iter = m.find(key);
                if (iter == m.end())
                    res += "?";
                else
                    res += iter->second;
                key.clear();
            } else {
                if (addKey)
                    key += c;
                else
                    res += c;
            }
        }
        return res;
    }
};

int main() {
    string s = "(name)is(age)yearsold";
    vector<vector<string>> knowledge = {{"name", "bob"},
                                        {"age",  "two"}};
    cout << Solution().evaluate(s, knowledge);
//    s.replace(8,5,"123",3);
//    cout<<s;
    return 0;
}