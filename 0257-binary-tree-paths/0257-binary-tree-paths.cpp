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
    void search(TreeNode *root, vector<string>&ans,string s)
    {
        if(root==NULL) return ;

        if(!s.empty())
        {
            s+="->"+to_string(root->val);
        }
        else
        {
            s+=to_string(root->val);
        }

        if(root->left==NULL && root->right==NULL)
        {
            ans.push_back(s);
            return;
        }
       

        search(root->left,ans,s);
        search(root->right,ans,s);
        


    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        
        string s="";
        search(root,ans,s);
        return ans;
    }
};