/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int ht(TreeNode* r){
        if(!r) return 0;
        return 1 + max(ht(r->right),ht(r->left));
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
        int maxdia=max(diameterOfBinaryTree(root->right),diameterOfBinaryTree(root->left));
        return max(maxdia,ht(root->right)+ht(root->left));
    }
};
