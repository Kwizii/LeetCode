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
    int m = 0;
public:
    int maxDepth(TreeNode *root) {
        if (!root)
            return 0;
        int lh = maxDepth(root->left);
        int rh = maxDepth(root->right);
        m = max(m, lh + rh);
        return max(lh, rh) + 1;
    }

    int diameterOfBinaryTree(TreeNode *root) {
        maxDepth(root);
        return m;
    }
};

int main() {

    return 0;
}