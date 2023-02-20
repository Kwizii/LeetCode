//
// Created by Chanvo on 2023/1/20.
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
    vector<int> findingUsersActiveMinutes(vector<vector<int>> &logs, int k) {
        unordered_map<int, unordered_set<int>> ids;
        for (auto &&log: logs)
            ids[log[0]].emplace(log[1]);
        vector<int> counts(k);
        for (auto &&[_, m]: ids)
            counts[m.size() - 1]++;
        return counts;
    }
};

int main() {
    vector<int> a1 = {305589003, 4136};
    vector<int> a2 = {305589004, 4139};
    vector<int> a3 = {305589004, 4141};
    vector<int> a4 = {305589004, 4137};
    vector<int> a5 = {305589001, 4139};
    vector<int> a6 = {305589001, 4139};
    vector<vector<int>> a = {a1, a2, a3, a4, a5, a6};
    Solution().findingUsersActiveMinutes(a, 6);
    return 0;
}