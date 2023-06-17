//
// Created by ChanvoBook on 2023/4/28.
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

class DinnerPlates {
public:
    vector<stack<int>> *plates;
    int capacity;

    DinnerPlates(int capacity) {
        this->capacity = capacity;
        this->plates = new vector<stack<int>>;
    }

    void push(int val) {
        for (auto &plate: *plates) {
            if (plate.size() < capacity) {
                plate.push(val);
                return;
            }
        }
        stack<int> plate;
        plate.push(val);
        plates->push_back(plate);
    }

    int pop() {
        for (int i = plates->size() - 1; i >= 0; --i) {
            if (!(*plates)[i].empty()) {
                int top = (*plates)[i].top();
                (&(*plates)[i])->pop();
                return top;
            }
        }
        return -1;
    }

    int popAtStack(int index) {
        if (index >= plates->size())
            return -1;
        stack<int> *plate = &(*plates)[index];
        if (plate->empty())
            return -1;
        int top = plate->top();
        plate->pop();
        return top;
    }
};

int main() {
    DinnerPlates D = DinnerPlates(1);  // 初始化，栈最大容量 capacity = 2
    D.push(1);
    D.push(2);
    D.push(3);
    cout << D.popAtStack(1);
    cout << D.pop();
    cout << D.pop();
    return 0;
}