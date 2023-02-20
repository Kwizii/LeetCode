//
// Created by Chanvo on 2023/2/8.
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
    vector<string> removeSubfolders(vector<string> &folder) {
        sort(folder.begin(), folder.end());
        vector<string> ans = {folder[0]};
        for (int i = 1; i < folder.size(); ++i) {
            if (int pre = ans.end()[-1].size(); !(pre < folder[i].size() && ans.end()[-1] == folder[i].substr(0, pre) &&
                                                  folder[i][pre] == '/')) {
                ans.push_back(folder[i]);
            }
        }
        return ans;
    }
};

int main() {
    vector<string> v = {"/a", "/b", "/c", "/d", "/f"};
    Solution().removeSubfolders(v);
    cout << v.end()[-1];
    function<string(string, string)> x = [&](const string &a, const string &b) {
        return a + b;
    };
    cout << x(v[0], v[1]);
    return 0;
}
