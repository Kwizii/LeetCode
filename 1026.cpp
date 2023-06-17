//
// Created by ChanvoBook on 2023/4/18.
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
    int ans;

    int maxAncestorDiff(TreeNode *root) {
        ans = 0;
        dfs(root, root->val, root->val);
        return ans;
    }

    void dfs(TreeNode *node, int min, int max) {
        if (!node)
            return;
        min = std::min(min, node->val);
        max = std::max(max, node->val);
        if (node->left) {
            ans = std::max(ans, std::max(abs(node->left->val - min), abs(node->left->val - max)));
            dfs(node->left, min, max);

        }
        if (node->right) {
            ans = std::max(ans, std::max(abs(node->right->val - min), abs(node->right->val - max)));
            dfs(node->right, min, max);
        }
    }
};

int main() {

    return 0;
}