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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root) return {};
        vector<vector<int>> res;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int qLen=q.size();
            vector<int> lev;
            for(int i=0;i<qLen;i++){
                TreeNode* curr= q.front();
                q.pop();
                if(curr){
                    lev.push_back(curr->val);
                    q.push(curr->left);
                    q.push(curr->right);
                }   
            }
            if(!lev.empty()) res.push_back(lev);
        }
        return res;
    }
};
