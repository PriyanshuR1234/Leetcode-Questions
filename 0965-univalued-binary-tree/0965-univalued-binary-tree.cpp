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
    bool flag=true;
    void recurse(TreeNode * root, int n)
    {
        if(root==NULL) return ;

        recurse(root->left,n);
        if(n!=root->val)
        {
            flag=false;
            return;
        }
        recurse(root->right,n);
    }
    bool isUnivalTree(TreeNode* root) {
        int n=root->val;
        recurse(root,n);
        return flag;
        
    }
};