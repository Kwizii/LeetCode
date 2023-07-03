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

using namespace std;

class MyHashSet {
private:
    vector<bool> hashset = vector<bool>(1e6 + 1);
public:

    MyHashSet() {
    }

    void add(int key) {
        this->hashset[key] = true;
    }

    void remove(int key) {
        this->hashset[key] = false;
    }

    bool contains(int key) {
        return this->hashset[key];
    }
};

int main() {

    return 0;
}