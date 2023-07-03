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
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> umap;
        unordered_map<char, char> umap_rev;
        for (int i = 0; i < s.size(); ++i) {
            if (umap.count(s[i])) {
                if (umap[s[i]] != t[i])
                    return false;
            } else {
                if (umap_rev.count(t[i]))
                    return false;
                umap_rev[t[i]] = s[i];
                umap[s[i]] = t[i];
            }
        }
        return true;
    }
};

int main() {

    return 0;
}