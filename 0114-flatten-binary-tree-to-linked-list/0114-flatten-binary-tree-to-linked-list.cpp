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
    void recurse(TreeNode * root,TreeNode * &prev)
    {
        if(root==NULL)return;

       
        TreeNode * left=root->left;
        TreeNode * right=root->right;
        prev->right = root;
        prev->left = nullptr; 
        prev = root; 
        
        recurse(left,prev);
        recurse(right,prev);
    }
    void flatten(TreeNode* root) {
        if (!root) return;
        
        TreeNode dummy(0);
        TreeNode* prev = &dummy;
        
        recurse(root, prev);
    }
};