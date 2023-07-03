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
    int numUniqueEmails(vector<string> &emails) {
        unordered_map<string, bool> umap;
        for (const auto &email: emails) {
            string final = "";
            bool name = true;
            for (int i = 0; i < email.size(); ++i) {
                if (email[i] == '@')
                    name = false;
                if (name && email[i] == '.')
                    continue;
                if (name && email[i] == '+') {
                    while (email[i] != '@')
                        i++;
                    name = false;
                }
                final += email[i];
            }
            umap[final] = true;
        }
        return umap.size();
    }
};

int main() {
    vector<string> x{"test.email+alex@leetcode.com", "test.e.mail+bob.cathy@leetcode.com",
                     "testemail+david@lee.tcode.com"};
    cout << Solution().numUniqueEmails(x);
    return 0;
}