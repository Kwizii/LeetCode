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
public:
    bool sameTree(TreeNode *root, TreeNode *subRoot) {
        if (root && !subRoot)
            return false;
        if (!root && subRoot)
            return false;
        if (!root)
            return true;
        if (root->val != subRoot->val)
            return false;
        return sameTree(root->left, subRoot->left) && sameTree(root->right, subRoot->right);
    }

    bool isSubtree(TreeNode *root, TreeNode *subRoot) {
        if (!root)
            return false;
        if (sameTree(root, subRoot))
            return true;
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};

int main() {
    TreeNode *n1 = new TreeNode(1, nullptr, new TreeNode(1, nullptr, new TreeNode(1, new TreeNode(2), nullptr)));
    TreeNode *n2 = new TreeNode(1, nullptr, new TreeNode(1, new TreeNode(2), nullptr));
//    cout << Solution().isSubtree(n1, n2);
    cout << Solution().isSubtree(n1->right, n2);
    return 0;
}