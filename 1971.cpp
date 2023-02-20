//
// Created by Chanvo on 2022/12/19.
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

using namespace std;

class Solution {
public:
//    bool validPath(int n, vector<vector<int>> &edges, int source, int destination) {
//        if (source == destination)
//            return true;
//        vector<bool> visited(n, false);
//        visited[source] = true;
//        vector<vector<int>> adj(n);
//        for (auto &edge: edges) {
//            int from = edge[0], end = edge[1];
//            adj[from].emplace_back(end);
//            adj[end].emplace_back(from);
//        }
//
//        stack<int> stack;
//        stack.push(source);
//        while (!stack.empty()) {
//            int top = stack.top();
//            stack.pop();
//            for (auto v: adj[top]) {
//                if (v == destination)
//                    return true;
//                else if (!visited[v]) {
//                    stack.push(v);
//                    visited[top] = true;
//                }
//            }
//        }
//        return false;
//    }
//
    vector<int> parent;

    int find(int x) {
        if (x != parent[x]) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }

    bool validPath(int n, vector<vector<int>> &edges, int source, int destination) {
        for (int i = 0; i < n; ++i)
            parent.emplace_back(i);
        for (auto edge: edges) {
            parent[find(edge[0])] = find(edge[1]);
        }
        return find(source) == find(destination);
    }
};

int main() {
    vector<vector<int>> edges = {{2, 9},
                                 {7, 8},
                                 {5, 9},
                                 {7, 2},
                                 {3, 8},
                                 {2, 8},
                                 {1, 6},
                                 {3, 0},
                                 {7, 0},
                                 {8, 5}};
    cout << Solution().validPath(10, edges, 1, 0);
    return 0;
}