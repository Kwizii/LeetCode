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
#include "structs.cpp"

using namespace std;

class Solution {
    int depth(TreeNode *root) {
        if (!root)return 0;
        return max(depth(root->left), depth(root->right)) + 1;
    }

public:
    bool isBalanced(TreeNode *root) {
        if (!root)
            return true;
        if (abs(depth(root->left) - depth(root->right)) > 1)
            return false;
        return isBalanced(root->left) && isBalanced(root->right);
    }
};

int main() {

    return 0;
}