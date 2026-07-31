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
    void triverse(TreeNode * temp,vector<int> & arr)
    {
        if(temp==NULL) return;
        
        triverse(temp->left,arr);
        arr.push_back(temp->val);
        triverse(temp->right,arr);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        TreeNode * temp=root;
        vector<int>arr;
        triverse(root,arr);
        return arr;
    }
};