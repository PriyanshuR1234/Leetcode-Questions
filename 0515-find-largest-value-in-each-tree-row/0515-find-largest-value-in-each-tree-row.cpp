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
    void recurse(TreeNode * root, int level, vector<int>&ans)
    {
        if(root==NULL)return;

        if (level == ans.size()) {
            ans.push_back(root->val);
        } else {
            
            ans[level] = max(ans[level], root->val);
        }

        recurse(root->left,level+1,ans);

        recurse(root->right,level+1,ans);
    }
    vector<int> largestValues(TreeNode* root) {
        vector<int>ans;
        recurse(root,0,ans);
        // for(int i=1;i<ans.size();i++)
        // {
        //     int m=ans[i][0];
        //     for(int j=1;j<ans[i].size();j++)
        //     {
        //         m=max(m,ans[i][j]);
        //     }
        //     ans[0].push_back(m);
        // }
        return ans;
    }
};