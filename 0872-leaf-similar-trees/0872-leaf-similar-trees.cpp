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
    void recurse(TreeNode * root, vector<int>& ans,bool flag)
    {
        if(root==NULL) return;
        if(flag==true)
        {
            recurse(root->left,ans,flag);
            if(root->left==NULL && root->right==NULL)
            {
                ans.push_back(root->val);
            }
            recurse(root->right,ans,flag);
        }
        else
        {
            recurse(root->right,ans,flag);
            if (root->left == nullptr && root->right == nullptr) {
                
                if (!ans.empty() && ans.back() == root->val) {
                    ans.pop_back();
                } else {
                    
                    ans.push_back(-1); 
                }
            }
            recurse(root->left,ans,flag);
        }
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>ans;
        recurse(root1,ans,true);
        //reverse(ans.begin(),ans.end());
        recurse(root2,ans,false);
        return (ans.empty());
    }
};