//
// Created by ChanvoBook on 2023/12/9.
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
#include "random"
//#include "structs.cpp"

using namespace std;

class LRUCache {
    int capacity;
public:
    list<pair<int, int>> l;
    unordered_map<int, decltype(l.begin())> umap;

    LRUCache(int capacity) : capacity(capacity) {}

    int get(int key) {
        if (!umap.count(key))
            return -1;
        l.splice(l.begin(), l, umap[key]);
        return l.front().second;
    }

    void put(int key, int value) {
        if (umap.count(key)) {
            l.splice(l.begin(), l, umap[key]);
            l.front().second = value;
        } else {
            l.emplace_front(key, value);
            umap[key] = l.begin();
        }
        if (l.size() > capacity) {
            umap.erase(l.back().first);
            l.pop_back();
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
int main() {
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<double> dis(0.0, 1.0);

    LRUCache *obj = new LRUCache(3000);
    for (int i = 0; i < 5000; ++i) {
        obj->put((int) (dis(gen) * 10000), i);
    }
    for (int i = 0; i < 5000; ++i) {
        cout << obj->get((int) (dis(gen) * 10000));
    }
//    cout << obj->get(1);
//    cout << obj->get(3);
//    cout << obj->get(4);
    return 0;
}