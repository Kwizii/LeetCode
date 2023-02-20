#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
private:

    TreeNode *
    traversal(vector<int> &inorder, vector<int> &preorder, int inorderBegin, int inorderEnd, int preorderBegin,
              int preorderEnd) {
        if (preorderBegin == preorderEnd) return nullptr;

        // 前序遍历数组第一个元素，就是当前的中间节点
        int rootValue = preorder[preorderBegin];
        TreeNode *root = new TreeNode(rootValue);

        // 叶子节点
        if (preorderEnd - preorderBegin == 1) return root;

        // 找到中序遍历的切割点
        int delimiterIndex;
        for (delimiterIndex = inorderBegin; delimiterIndex < inorderEnd; ++delimiterIndex) {
            if (inorder[delimiterIndex] == rootValue)break;
        }

        // 切割中序序列
        int leftInorderBegin = inorderBegin;
        int leftInorderEnd = delimiterIndex;
        int rightInorderBegin = delimiterIndex + 1;
        int rightInorderEnd = inorderEnd;


        // 切割前序数组
        int leftPreorderBegin = preorderBegin + 1;
        int leftPreorderEnd = preorderBegin + 1 + delimiterIndex - inorderBegin;
        int rightPreorderBegin = preorderBegin + 1 + delimiterIndex - inorderBegin;
        int rightPreorderEnd = preorderEnd;//排除最后一个元素


        root->left = traversal(inorder, preorder, leftInorderBegin, leftInorderEnd, leftPreorderBegin,
                               leftPreorderEnd);
        root->right = traversal(inorder, preorder, rightInorderBegin, rightInorderEnd, rightPreorderBegin,
                                rightPreorderEnd);

        return root;
    }

public:
    TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
        if (inorder.empty() || preorder.empty())return nullptr;
        return traversal(inorder, preorder, 0, inorder.size(), 0, preorder.size());
    }
};