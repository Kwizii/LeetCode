//
// Created by Chanvo on 2022/12/24.
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
    string largestMerge(string word1, string word2) {
        string merge;
        int i = 0, j = 0;
        while (i < word1.size() || j < word2.size()) {
            if (i < word1.size() && word1.substr(i) > word2.substr(j))
                merge.push_back(word1[i++]);
            else
                merge.push_back(word2[j++]);
        }
        return merge;
    }
};

int main() {
    string word1 = "cabaa", word2 = "bcaaa";
    cout << word1.substr(1);
    return 0;
}