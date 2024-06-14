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

class KthLargest {
public:
    priority_queue<int, vector<int>, greater<>> q;
    int k;

    KthLargest(int k, vector<int> &nums) : k(k) {
        for (const auto &num: nums)
            add(num);
    }

    int add(int val) {
        q.push(val);
        if (q.size() > k)
            q.pop();
        return q.top();
    }
};

int main() {
    vector<int> x{4, 5, 8, 2};
    auto g = KthLargest(3, x);
    cout << g.add(3);
    cout << g.add(5);
    cout << g.add(10);
    cout << g.add(9);
    cout << g.add(4);
    return 0;
}