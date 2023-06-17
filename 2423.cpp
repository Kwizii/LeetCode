//
// Created by ChanvoBook on 2023/4/29.
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
    bool equalFrequency(string word) {
        unordered_map<char, int> umap(26);
        for (auto &c: word)
            umap[c]++;
        multiset<int> mset;
        for (auto &[_, v]: umap)
            mset.insert(v);
        int first = *mset.begin(), second = *next(mset.begin(), 1), last1 = *prev(mset.end(), 1), last2 = *prev(
                mset.end(), 2);
        return mset.size() == 1 || (first == 1 && last1 == second) || (first == last2 && first == last1 - 1);
    }
};

int main() {
    cout << Solution().equalFrequency("ddaccb");
    return 0;
}