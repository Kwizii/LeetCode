//
// Created by ChanvoBook on 2023/6/30.
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
    int numMatchingSubseq(string s, vector<string> &words) {
        map<char, vector<int>> idx_map;
        for (int i = 0; i < s.size(); ++i) {
            idx_map[s[i]].push_back(i);
        }
        int prev, res = 0;
        bool suc, found;
        vector<bool> sucList(words.size());
        for (int k = 0; k < words.size(); ++k) {
            string word = words[k];
            if (k > 0) {
                auto it = find(words.begin(), words.begin() + k, word);
                if (it != words.begin() + k) {
                    int idx = distance(words.begin(), it);
                    sucList[k] = sucList[idx];
                    if (sucList[k])
                        res++;
                    continue;
                }
            }
            prev = -1;
            suc = true;
            map<char, vector<int>> copy_map(idx_map);
            for (int i = 0; i < word.size(); ++i) {
                if (copy_map[word[i]].empty()) {
                    suc = false;
                    break;
                }
                vector<int> &idxes = copy_map[word[i]];
                found = false;
                for (const auto &idx: idxes) {
                    if (idx > prev) {
                        prev = idx;
                        found = true;
                        break;
                    }
                }
                if (found) {
                    idxes.erase(idxes.begin());
                } else {
                    suc = false;
                    break;
                }
            }
            if (suc) {
                sucList[k] = true;
                res++;
            }
        }
        return res;
    }
};

int main() {
    vector<string> words = {"a", "bb", "acd", "ace"};
    Solution().numMatchingSubseq("abcde", words);
    return 0;
}