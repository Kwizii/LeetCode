//
// Created by Chanvo on 2023/2/7.
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
    vector<string> alertNames(vector<string> &keyName, vector<string> &keyTime) {
        unordered_map<string, vector<int>> umap;
        for (int i = 0; i < keyName.size(); ++i) {
            int hour = atoi(keyTime[i].substr(0, 2).c_str());
            int minute = atoi(keyTime[i].substr(3, 5).c_str());
            int val = hour * 60 + minute;
            umap[keyName[i]].emplace_back(val);
        }
        vector<string> names;
        for (auto &[name, list]: umap) {
            sort(list.begin(), list.end());
            for (int i = 2; i < list.size(); ++i) {
                if (list[i] - list[i - 2] <= 60) {
                    names.emplace_back(name);
                    break;
                }
            }
        }
        sort(names.begin(), names.end());
        return names;
    }
};

int main() {
    vector<string> a = {"daniel", "daniel", "daniel", "luis", "luis", "luis", "luis"};
    vector<string> b = {"10:00", "10:40", "11:00", "09:00", "11:00", "13:00", "15:00"};
    Solution().alertNames(a, b);
    return 0;
}