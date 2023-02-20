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
    TreeNode *traversal(vector<int> &inorder, vector<int> &postorder) {
        if (postorder.empty()) return nullptr;

        // 后序遍历数组最后一个元素，就是当前的中间节点
        int rootValue = postorder[postorder.size() - 1];
        TreeNode *root = new TreeNode(rootValue);

        // 叶子节点
        if (postorder.size() == 1) return root;

        // 找到中序遍历的切割点
        int delimiterIndex;
        for (delimiterIndex = 0; delimiterIndex < inorder.size(); ++delimiterIndex) {
            if (inorder[delimiterIndex] == rootValue)break;
        }

        // 切割中序序列
        // 左闭右开区间：[0,delimiterIndex)
        vector<int> leftInorder(inorder.begin(), inorder.begin() + delimiterIndex);
        // 右区间 [delimiterIndex + 1,end]
        vector<int> rightInorder(inorder.begin() + delimiterIndex + 1, inorder.end());

        // postOrder抛弃末尾元素
        postorder.resize(postorder.size() - 1);

        // 切割后序数组
        // 依然左闭右开，注意这里使用了左中序数据大小作为切割点
        // [0, leftInorder.size)
        vector<int> leftPostorder(postorder.begin(), postorder.begin() + leftInorder.size());
        // [leftInorder.size, end)
        vector<int> rightPostorder(postorder.begin() + leftInorder.size(), postorder.end());

        root->left = traversal(leftInorder, leftPostorder);
        root->right = traversal(rightInorder, rightPostorder);

        return root;
    }

    TreeNode *
    traversal1(vector<int> &inorder, vector<int> &postorder, int inorderBegin, int inorderEnd, int postorderBegin,
               int postorderEnd) {
        if (postorderBegin == postorderEnd) return nullptr;

        // 后序遍历数组最后一个元素，就是当前的中间节点
        int rootValue = postorder[postorderEnd - 1];
        TreeNode *root = new TreeNode(rootValue);

        // 叶子节点
        if (postorderEnd - postorderBegin == 1) return root;

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


        // 切割后序数组
        int leftPostOrderBegin = postorderBegin;
        int leftPostOrderEnd = postorderBegin + delimiterIndex - inorderBegin;
        int rightPostorderBegin = postorderBegin + delimiterIndex - inorderBegin;
        int rightPostorderEnd = postorderEnd - 1;//排除最后一个元素


        root->left = traversal1(inorder, postorder, leftInorderBegin, leftInorderEnd, leftPostOrderBegin,
                                leftPostOrderEnd);
        root->right = traversal1(inorder, postorder, rightInorderBegin, rightInorderEnd, rightPostorderBegin,
                                 rightPostorderEnd);

        return root;
    }

public:
    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder) {
        if (inorder.empty() || postorder.empty())return nullptr;
//        return traversal(inorder, postorder);
        return traversal1(inorder, postorder, 0, inorder.size(), 0, postorder.size());
    }
};