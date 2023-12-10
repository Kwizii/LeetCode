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
    int maxDepth(TreeNode *root) {
        if (!root)
            return 0;
        return max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }
};

int main() {

    return 0;
}