//
// Created by Chanvo on 2023/2/12.
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
    string alphabetBoardPath(string target) {
        int curX = 0, curY = 0;
        string ans;
        for (auto c: target) {
            int nxtX = (c - 'a') / 5;
            int nxtY = (c - 'a') % 5;
            if (nxtX < curX)
                ans.append(curX - nxtX, 'U');
            if (nxtY < curY)
                ans.append(curY - nxtY, 'L');
            if (nxtX > curX)
                ans.append(nxtX - curX, 'D');
            if (nxtY > curY)
                ans.append(nxtY - curY, 'R');
            ans.push_back('!');
            curX = nxtX, curY = nxtY;
        }
        return ans;
    }
};


int main() {
    cout << Solution().alphabetBoardPath("ezyaz");
    return 0;
}