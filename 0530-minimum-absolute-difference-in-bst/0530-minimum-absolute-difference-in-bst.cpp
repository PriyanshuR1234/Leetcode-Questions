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
    void recurse(TreeNode * root, int &p, int &m)
    {
        if(root==NULL)return ;

        recurse(root->left, p,m);

        if(p!=INT_MAX)
        {
            m=min(m,abs(p-root->val));
        }
        
        p=root->val;
        recurse(root->right, p,m);
    }
    int getMinimumDifference(TreeNode* root) {
        int m=INT_MAX;
        int p=INT_MAX;
        recurse(root,p,m);
        return m;
        
    }
};