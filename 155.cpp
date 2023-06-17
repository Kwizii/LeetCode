//
// Created by ChanvoBook on 2023/6/17.
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

class MinStack {
public:
    vector<pair<int, int>> stk;

    MinStack() {
    }

    void push(int val) {
        if (stk.empty())
            stk.emplace_back(val, val);
        else
            stk.emplace_back(val, min(val, stk.back().second));
    }

    void pop() {
        stk.erase(stk.end() - 1);
    }

    int top() {
        return stk.back().first;
    }

    int getMin() {
        return stk.back().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
int main() {

    return 0;
}