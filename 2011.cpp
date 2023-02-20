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
    int finalValueAfterOperations(vector<string> &operations) {
        int x = 0;
        for (const auto& s: operations) {
            if (s.find("--") != -1)
                x--;
            else
                x++;
        }
        return x;
    }
};

int main() {
    vector<string> ops = {"--X", "X++", "X++"};
    cout << Solution().finalValueAfterOperations(ops);
    return 0;
}