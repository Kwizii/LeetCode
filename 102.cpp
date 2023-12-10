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
    vector<vector<int>> levelOrder(TreeNode *root) {
        vector<vector<int>> ans;
        queue<TreeNode *> q;
        if (root)q.push(root);
        while (!q.empty()) {
            vector<int> tmp;
            int n = q.size();
            while (n--) {
                TreeNode *cur = q.front();
                q.pop();
                tmp.emplace_back(cur->val);
                if (cur->left)q.push(cur->left);
                if (cur->right)q.push(cur->right);
            }
            ans.emplace_back(tmp);
        }
        return ans;
    }
//    int getHeight(TreeNode *root, TreeNode *node, int height) {
//        if (root == nullptr) {
//            return -1;  // 树为空，返回-1表示节点不在树中
//        }
//        if (root == node) {
//            return height;  // 找到节点，返回当前高度
//        }
//        int leftHeight = getHeight(root->left, node, height + 1);  // 递归搜索左子树
//        if (leftHeight != -1) {
//            return leftHeight;  // 在左子树中找到节点，返回高度
//        }
//        int rightHeight = getHeight(root->right, node, height + 1);  // 递归搜索右子树
//        return rightHeight;  // 返回右子树中节点的高度
//    }
//
//    vector<vector<int>> levelOrder(TreeNode *root) {
//        vector<vector<int>> ans;
//        vector<int> g;
//        queue<TreeNode *> q;
//        q.push(root);
//        int curHeight = 0;
//        vector<int> tmp;
//        while (!q.empty() && q.front()) {
//            TreeNode *cur = q.front();
//            int h = getHeight(root, cur, 0);
//            if (h != curHeight) {
//                curHeight = h;
//                ans.push_back(tmp);
//                tmp.clear();
//            }
//            tmp.emplace_back(cur->val);
//            if (cur->left)q.push(cur->left);
//            if (cur->right)q.push(cur->right);
//            q.pop();
//        }
//        if (!tmp.empty())
//            ans.emplace_back(tmp);
//        return ans;
//    }
};

int main() {
    TreeNode *t = new TreeNode(3, new TreeNode(9), new TreeNode(20, new TreeNode(15), new TreeNode(7)));
    Solution().levelOrder(nullptr);
    return 0;
}