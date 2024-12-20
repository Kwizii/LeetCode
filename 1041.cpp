//
// Created by ChanvoBook on 2023/4/11.
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
    bool isRobotBounded(string instructions) {
        vector<vector<int>> direc{{0,  1},
                                  {1,  0},
                                  {0,  -1},
                                  {-1, 0}};
        int direcIndex = 0;
        int x = 0, y = 0;
        for (char instruction: instructions) {
            if (instruction == 'G') {
                x += direc[direcIndex][0];
                y += direc[direcIndex][1];
            } else if (instruction == 'L') {
                direcIndex += 3;
                direcIndex %= 4;
            } else {
                direcIndex++;
                direcIndex %= 4;
            }
        }
        return direcIndex != 0 || (x == 0 && y == 0);
    }
};

int main() {

    return 0;
}