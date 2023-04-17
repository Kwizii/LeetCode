//
// Created by ChanvoBook on 2023/4/13.
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
    int maxArea(vector<int> &height) {
        int maxArea = 0;
        int i = 0, j = height.size() - 1;
        while (j > i) {
            int area = min(height[i], height[j]) * (j - i);
            maxArea = max(area, maxArea);
            if (height[i] < height[j]) {
                i++;
            } else {
                j--;
            }
        }
        return maxArea;
    }
};

int main() {

    return 0;
}