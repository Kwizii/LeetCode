//
// Created by ChanvoBook on 2023/12/12.
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
    vector<vector<int>> kClosest(vector<vector<int>> &points, int k) {
        sort(points.begin(), points.end(), [](const auto &a, const auto &b) {
            return (a[0] * a[0] + a[1] * a[1]) < (b[0] * b[0] + b[1] * b[1]);
        });
        return {points.begin(), points.begin() + k};
    }

//    struct cmp {
//        bool operator()(const vector<int> &a, const vector<int> &b) {
//            return (a[0] * a[0] + a[1] * a[1]) < (b[0] * b[0] + b[1] * b[1]);
//        }
//    };
//
//    vector<vector<int>> kClosest(vector<vector<int>> &points, int k) {
//        priority_queue<vector<int>, vector<vector<int>>, cmp> q;
//        cmp comparator;
//        for (const auto &point: points) {
//            if (q.size() < k)
//                q.emplace(point);
//            else if (comparator(point, q.top())) {
//                q.pop();
//                q.emplace(point);
//            }
//        }
//        vector<vector<int>> ans;
//        while (!q.empty()) {
//            ans.emplace_back(q.top());
//            q.pop();
//        }
//        return ans;
//    }
};

int main() {
    vector<vector<int>> x{{1,  3},
                          {-2, 2}};
    Solution().kClosest(x, 1);
    return 0;
}