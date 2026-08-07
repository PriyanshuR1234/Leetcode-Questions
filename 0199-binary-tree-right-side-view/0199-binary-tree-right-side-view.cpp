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
    void rightview(vector<int>&ans,TreeNode * root,int level)
    {
        if(root==nullptr)
        {
            return ;
        }
        if(ans.size()==level)
        {
            ans.push_back(root->val);
        }
        rightview(ans,root->right,level+1);
        rightview(ans,root->left,level+1);
    }

    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        rightview(ans,root,0);
        return ans;
    }
};