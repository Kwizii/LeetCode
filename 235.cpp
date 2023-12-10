//
// Created by ChanvoBook on 2023/12/10.
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
public:
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
        if (root->val < p->val && root->val < q->val) return lowestCommonAncestor(root->right, p, q);
        if (root->val > p->val && root->val > q->val) return lowestCommonAncestor(root->left, p, q);
        return root;
    }
};

int main() {

    return 0;
}