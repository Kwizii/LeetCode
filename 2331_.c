//
// Created by Chanvo on 2023/2/6.
//
#include "stdbool.h"

// Definition for a binary tree node.
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};


bool calculate(struct TreeNode *node) {
    if (node->val < 2)
        return node->val;
    if (node->val == 2) {
        return calculate(node->left) || calculate(node->right);
    } else {
        return calculate(node->left) && calculate(node->right);
    }
}

bool evaluateTree(struct TreeNode *root) {
    return calculate(root);
}

int main() {
    return 0;
}