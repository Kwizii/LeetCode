//
// Created by ChanvoBook on 2023/4/9.
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
    bool checkDistances(string s, vector<int> &distance) {
        for (int i = 0; i < distance.size(); ++i) {
            char cur = 'a' + i;
            int l = s.find_first_of(cur);
            int r = s.find_last_of(cur);
            if (l != r) {
                if (r - l - 1 != distance[i])
                    return false;
            }
        }
        return true;
    }
};

int main() {

    return 0;
}