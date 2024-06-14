//
// Created by ChanvoBook on 2023/12/10.
//
#include "iostream"
#include "queue"
#include "deque"
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
#include "list"
#include "sstream"
#include "structs.cpp"

using namespace std;

class Solution {
public:
    int carFleet(int target, vector<int> &position, vector<int> &speed) {
        vector<pair<int, double>> tmp;
        for (int i = 0; i < position.size(); ++i)
            tmp.emplace_back(position[i], (target - position[i]) / (double) speed[i]);
        sort(tmp.begin(), tmp.end());
        int ans = 0;
        double maxTime = 0.;
        for (int i = position.size() - 1; i >= 0; --i) {
            if (tmp[i].second > maxTime) {
                maxTime = tmp[i].second;
                ans++;
            }
        }
        return ans;
    }
};

int main() {
    vector<int> positions{10, 8, 0, 5, 3};
    vector<int> speeds{2, 4, 1, 1, 3};
    cout << Solution().carFleet(12, positions, speeds);
    return 0;
}