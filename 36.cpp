//
// Created by ChanvoBook on 2023/6/4.
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

class Solution {
public:
    bool isValidSudoku(vector<vector<char>> &board) {
        unordered_map<string, bool> umap;
        vector<int> x;
        for (int i = 0; i < board.size(); ++i) {
            for (int j = 0; j < board.size(); ++j) {
                char num = board[i][j];
                if (num == '.')
                    continue;
                string key1 = "c" + to_string(i) + board[i][j];
                string key2 = "r" + to_string(j) + board[i][j];
                string b = to_string(i / 3) + to_string(j / 3);
                string key3 = "b" + b + board[i][j];
                if (umap.count(key1) || umap.count(key2) || umap.count(key3)) {
                    return false;
                }
                umap[key1] = true;
                umap[key2] = true;
                umap[key3] = true;
            }
        }
        return true;
    }
};

int main() {
    vector<vector<char>> board = {{'5', '3', '.', '.', '7', '.', '.', '.', '.'},
                                  {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
                                  {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
                                  {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
                                  {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
                                  {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
                                  {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
                                  {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
                                  {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};
    Solution().isValidSudoku(board);
    return 0;
}