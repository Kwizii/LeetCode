//
// Created by ChanvoBook on 2023/4/16.
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

class MajorityChecker {
public:
    unordered_map<int, vector<int>> m = unordered_map<int, vector<int>>(2e4 + 1);

    MajorityChecker(vector<int> &arr) {
        for (int i = 0; i < arr.size(); ++i) {
            // leftCnt, idx
            int num = arr[i];
            if (m.count(num) == 0)
                m[num] = vector<int>();
            m[num].emplace_back(i);
        }
    }

    int query(int left, int right, int threshold) {

        return -1;
    }
};

int main() {
    vector<int> arr = {1, 1, 2, 2, 1, 1};
    MajorityChecker *obj = new MajorityChecker(arr);
    cout << obj->query(0, 3, 3);
    return 0;
}