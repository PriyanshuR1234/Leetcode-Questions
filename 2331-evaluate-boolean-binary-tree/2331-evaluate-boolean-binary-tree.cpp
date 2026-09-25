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

    bool recurse(TreeNode * root)
    {
        //if(root==NULL)return true;

        if(root->val==0) return false;
        if(root->val==1) return true;


        if(root->val==2)
        {
            return recurse(root->left) || recurse(root->right);
        }
        if(root->val==3)
        {
            return recurse(root->left) && recurse(root->right);
        }
        return false;
    }
    bool evaluateTree(TreeNode* root) {
        return recurse(root);
        //return flag;
    }
};