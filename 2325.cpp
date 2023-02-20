//
// Created by Chanvo on 2023/2/1.
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
    string decodeMessage(string key, string message) {
        char hmap[26] = {0};
        char cur = 'a';
        for (char &i: key) {
            if (i != ' ' && hmap[i - 'a'] == 0)
                hmap[i - 'a'] = cur++;
        }
        for (char &i: message) {
            if (i != ' ')
                i = hmap[i - 'a'];
        }
        return message;
    }
};

int main() {
    string k = "the quick brown fox jumps over the lazy dog";
    string m = "vkbs bs t suepuv";
    cout << Solution().decodeMessage(k, m);
    return 0;
}