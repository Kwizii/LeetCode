//
// Created by Chanvo on 2023/1/23.
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

using namespace std;

class Solution {
public:
    double calculateTax(vector<vector<int>> &brackets, int income) {
        double totalTax = 0;
        int lower = 0;
        for (auto &bracket: brackets) {
            int upper = bracket[0], percent = bracket[1];
            int tax = (min(income, upper) - lower) * percent;
            totalTax += tax;
            if (income <= upper) {
                break;
            }
            lower = upper;
        }
        return (double) totalTax / 100.0;
    }
};


int main() {
    vector<int> a = {3, 50};
    vector<int> b = {7, 10};
    vector<int> c = {12, 25};
    vector<vector<int>> x = {a, b, c};
    cout << Solution().calculateTax(x, 10);
    return 0;
}