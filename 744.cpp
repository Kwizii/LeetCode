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

class Solution {
public:
    char nextGreatestLetter(vector<char> &letters, char target) {
        return target < letters.back() ? *upper_bound(letters.begin(), letters.end() - 1, target) : letters[0];
//        int mid = 0;
//        int i = 0, j = letters.size() - 1;
//        while (i <= j) {
//            mid = (i + j) / 2;
//            if (letters[mid] > target)
//                j = mid - 1;
//            else
//                i = mid + 1;
//        }
//        while (mid < letters.size() && mid <= j && letters[mid] <= target)
//            mid++;
//        if (mid == letters.size() || letters[mid] <= target)
//            return letters[0];
//        return letters[mid];
    }
};

int main() {
    vector<char> g = {'c', 'f', 'j'};
    cout << Solution().nextGreatestLetter(g, 'd');
    return 0;
}