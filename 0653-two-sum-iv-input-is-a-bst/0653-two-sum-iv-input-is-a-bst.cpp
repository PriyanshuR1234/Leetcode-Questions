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

    void recurse(TreeNode * root, int k, unordered_map<int,int>&ans,bool &flag)
    {
        if(root==NULL) return ;
        if(ans[k-root->val]>0)
        {
            flag=true;
            return;
        }
        else
        {
            ans[root->val]++;
        }
        recurse(root->left,k,ans,flag);
        recurse(root->right,k,ans,flag);
    }

    bool findTarget(TreeNode* root, int k) {
        unordered_map<int,int>ans;
        bool flag=false;
        recurse(root, k, ans,flag);
        return flag;
        
    }
};