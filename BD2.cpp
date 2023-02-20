//
// Created by Chanvo on 2023/1/7.
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

using namespace std;

int solution(int n, string s) {
    int f = 0;
    for (char i: s) {
        if (i == 'F')
            f++;
    }
    if (f == n || f == 0)
        return 0;
    int tmp = 0;
    for (int i = 0; i < f; ++i)
        if (s[i] == 'F')
            tmp++;
    int ans = f - tmp;
    for (int i = 1; i < n; ++i) {
        if (s[i - 1] == 'F')
            tmp--;
        if (s[(i + f - 1) % n] == 'F')
            tmp++;
        ans = min(ans, f - tmp);
    }
    return ans;
}


int main() {
    cout << solution(3, "FMF");
    return 0;
}