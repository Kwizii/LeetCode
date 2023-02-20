//
// Created by Chanvo on 2023/1/24.
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
private:
    struct Point {
        int x, y;

        Point() {};

        Point(int x, int y) : x(x), y(y) {};

        bool operator==(const Point &p) const {
            return x == p.x && y == p.y;
        }
    };

    struct Hash {
        std::size_t operator()(const Point &point) const {
            return hash<int>()(point.x) ^ hash<int>()(point.y);
        }
    };

public:
    vector<int> countPoints(vector<vector<int>> &points, vector<vector<int>> &queries) {
        unordered_map<Point, int, Hash> umap;
        for (auto &point: points) {
            Point p{point[0], point[1]};
            if (umap.find(p) == umap.end())
                umap.emplace(p, 1);
            else
                umap[p]++;
        }
        vector<int> ans(queries.size());
        fill(ans.begin(), ans.end(), 0);
        for (int i = 0; i < queries.size(); i++) {
            vector<int> &query = queries[i];
            for (auto &p: umap) {
                if ((pow(p.first.x - query[0], 2) + pow(p.first.y - query[1], 2)) <= pow(query[2], 2))
                    ans[i] += p.second;
            }
        }
        return ans;
    }
};

int main() {

    return 0;
}