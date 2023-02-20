//
// Created by Chanvo on 2023/2/10.
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
#include "ctime"

using namespace std;


/**
 * 暴力递归：从cur出发到aim的方法数
 * @param cur 当前位置 1~N
 * @param rest 剩余可走步数 0~k
 */
int process1(int cur, int aim, int rest, int N) {
    // 无剩余步数时，是否在aim上。
    if (rest == 0)
        return cur == aim;
    // 边界情况
    if (cur == 1)
        return process1(2, aim, rest - 1, N);
    if (cur == N)
        return process1(N, aim, rest - 1, N);
    // 中间情况
    return process1(cur + 1, aim, rest - 1, N) + process1(cur - 1, aim, rest - 1, N);
}

/**
 * 带缓存递归：从cur出发到aim的方法数
 * @param cur 当前位置 1~N
 * @param rest 剩余可走步数 0~k
 * @param dp 缓存数组
 */
int process2(int cur, int aim, int rest, int N, vector<vector<int>> &dp) {
    // 缓存中存在
    if (dp[cur][rest] != -1)
        return dp[cur][rest];
    // 无剩余步数时，是否在aim上。
    int ans;
    if (rest == 0)
        ans = cur == aim;
        // 边界情况
    else if (cur == 1)
        ans = process2(2, aim, rest - 1, N, dp);
    else if (cur == N)
        ans = process2(N, aim, rest - 1, N, dp);
        // 中间情况
    else
        ans = process2(cur + 1, aim, rest - 1, N, dp)
              + process2(cur - 1, aim, rest - 1, N, dp);
    dp[cur][rest] = ans;
    return ans;
}

/**
 * 求机器人从start走到aim的路线总数；机器人走到1时只能向2走，机器人走到N时只能向N-1走，机器人在中间可向两边移动。
 * @param start 起始点
 * @param aim 目标点
 * @param k 每次的步数
 * @param N 序列长度
 * @return 总路线数
 */
int ways1(int start, int aim, int k, int N) {
    return process1(start, aim, k, N);
}

int ways2(int start, int aim, int k, int N) {
    // 缓存数组 初始化为-1
    vector<vector<int>> dp(N + 1, vector<int>(k + 1, -1));
    return process2(start, aim, k, N, dp);
}

int ways3(int start, int aim, int k, int N) {
    // 缓存数组 初始化为0
    vector<vector<int>> dp(N + 1, vector<int>(k + 1, 0));
    // rest=0时只有cur==aim才为1，其余都为0
    dp[aim][0] = 1;
    for (int rest = 1; rest <= k; ++rest) {
        // 第一行只依赖于上一步的第二行
        dp[1][rest] = dp[2][rest - 1];
        // 中间情况
        for (int cur = 2; cur < N; ++cur) {
            dp[cur][rest] = dp[cur - 1][rest - 1] + dp[cur + 1][rest - 1];
        }
        // 倒一行只依赖于上一步的倒二行
        dp[N][rest] = dp[N - 1][rest - 1];
    }
    return dp[start][k];
}

int main() {
    cout << clock() << endl;
    cout << ways1(2, 55, 88, 111) << endl;
    cout << clock() << endl;
    cout << ways2(2, 55, 88, 111) << endl;
    cout << clock() << endl;
    cout << ways3(2, 55, 88, 111) << endl;
    cout << clock() << endl;
    return 0;
}