//
// Created by Chanvo on 2023/2/6.
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
#include "lc_structure.h"

using namespace std;

class Solution {
public:
    bool calculate(TreeNode *node) {
        if (node->val < 2)
            return node->val;
        if (node->val == 2) {
            return calculate(node->left) || calculate(node->right);
        } else {
            return calculate(node->left) && calculate(node->right);
        }
    }

    bool evaluateTree(TreeNode *root) {
        return calculate(root);
    }
};

int main() {

    return 0;
}