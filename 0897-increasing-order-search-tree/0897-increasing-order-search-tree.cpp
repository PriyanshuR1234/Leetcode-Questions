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
    void recurse(TreeNode * root, TreeNode * &newroot)
    {
        if(root==NULL)return;

        recurse(root->left,newroot);

        newroot->right=new TreeNode(root->val);
        newroot=newroot->right;
        cout<<root->val;

        recurse(root->right,newroot);

        
    }
    TreeNode* increasingBST(TreeNode* root) {
        TreeNode* dummy = new TreeNode(0);
        TreeNode* newroot = dummy;   
        recurse(root,newroot);
        
        return dummy->right;
        
    }
};