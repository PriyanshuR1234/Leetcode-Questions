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
    void recurse(TreeNode * root, TreeNode * &prev)
    {
        if(root==NULL)return;

        recurse(root->left,prev);

        // newroot->right=new TreeNode(root->val);
        // newroot=newroot->right;
        // cout<<root->val;

        root->left=NULL;
        prev->right=root;
        prev=root;

        recurse(root->right,prev);

        
    }
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* dummy = new TreeNode(0);
        TreeNode* prev = dummy;   
        recurse(root,prev);
        
        return dummy->right;
        
    }
};