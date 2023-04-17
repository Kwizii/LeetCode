//
// Created by ChanvoBook on 2023/4/15.
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
    vector<int> gardenNoAdj(int N, vector<vector<int>> &paths) {
        vector<int> G[N];
        vector<int> answer(N, 0);//初始化全部未染色
        for (auto &path: paths) {//建立邻接表
            G[path[0] - 1].emplace_back(path[1]);
            G[path[1] - 1].emplace_back(path[0]);
        }
        for (int i = 0; i < N; i++) {
            int colored[4] = {0};
            for (int p: G[i]) {
                if (answer[p - 1] != 0)
                    colored[answer[p - 1] - 1]++;
            }
            for (int j = 0; j < 4; ++j) {
                if (colored[j] == 0) {
                    answer[i] = j + 1;
                    break;
                }
            }
        }
        return answer;
    }
};

int main() {
    vector<vector<int>> x{{1, 2},
                          {2, 3},
                          {3, 1}};
    vector<int> a = Solution().gardenNoAdj(3, x);
    for (int i: a) {
        cout << i;
    }
    return 0;
}