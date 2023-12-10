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
    bool isSameTree(TreeNode *p, TreeNode *q) {
        if (q && !p)
            return false;
        if (p && !q)
            return false;
        if (!q)
            return true;
        if (q->val != p->val)
            return false;
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};

int main() {

    return 0;
}