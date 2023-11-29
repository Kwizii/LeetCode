//
// Created by ChanvoBook on 2023/11/15.
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
#include "sstream"

using namespace std;

class TimeMap {
public:
    unordered_map<string, vector<pair<int, string>>> store;

    TimeMap() {
    }

    void set(string key, string value, int timestamp) {
        store[key].emplace_back(timestamp, value);
    }

    string get(string key, int timestamp) {
        if (store.find(key) == store.end())
            return "";
        int i = 0, j = store[key].size() - 1;
        if (timestamp < store[key][i].first)
            return "";
        if (timestamp >= store[key][j].first)
            return store[key][j].second;
        while (i <= j) {
            int mid = (j - i) / 2 + i;
            if (store[key][mid].first > timestamp) {
                j = mid - 1;
            } else if (store[key][mid].first < timestamp) {
                i = mid + 1;
            } else {
                return store[key][mid].second;
            }
        }
        return store[key][i].first <= timestamp ? store[key][i].second : store[key][i - 1].second;
    }
};

int main(int argc, char *argv[]) {
    TimeMap x;
    x.set("love", "high", 10);
    x.set("love", "low", 20);
    cout << endl << x.get("love", 5);
    cout << endl << x.get("love", 10);
    cout << endl << x.get("love", 15);
    cout << endl << x.get("love", 20);
    cout << endl << x.get("love", 25);
}

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */
