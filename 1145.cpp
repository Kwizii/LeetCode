//
// Created by Chanvo on 2023/2/3.
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

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool btreeGameWinningMove(TreeNode *root, int n, int x) {
        TreeNode *xNode = find(root, x);
        int leftSize = getSubtreeSize(xNode->left);
        if (leftSize >= (n + 1) / 2) {
            return true;
        }
        int rightSize = getSubtreeSize(xNode->right);
        if (rightSize >= (n + 1) / 2) {
            return true;
        }
        int remain = n - 1 - leftSize - rightSize;
        return remain >= (n + 1) / 2;
    }

    TreeNode *find(TreeNode *node, int x) {
        if (node == nullptr) {
            return nullptr;
        }
        if (node->val == x) {
            return node;
        }
        TreeNode *res = find(node->left, x);
        if (res != nullptr) {
            return res;
        } else {
            return find(node->right, x);
        }
    }

    int getSubtreeSize(TreeNode *node) {
        if (node == nullptr) {
            return 0;
        }
        return 1 + getSubtreeSize(node->left) + getSubtreeSize(node->right);
    }
};

int main() {

    return 0;
}