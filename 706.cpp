//
// Created by ChanvoBook on 2023/7/3.
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
#include "list"

using namespace std;

class MyHashMap {
private:
    vector<int> hashmap = vector<int>(1e6 + 1, -1);
public:
    MyHashMap() {

    }

    void put(int key, int value) {
        this->hashmap[key] = value;
    }

    int get(int key) {
        return this->hashmap[key];
    }

    void remove(int key) {
        this->hashmap[key] = -1;
    }
};

int main() {

    return 0;
}