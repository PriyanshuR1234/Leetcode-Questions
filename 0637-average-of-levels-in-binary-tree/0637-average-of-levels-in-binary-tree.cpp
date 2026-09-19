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
    void recurse(TreeNode * root,int level, vector<vector<double>>&ans)
    {
        if(root==NULL) return ;

        if(level==ans.size())
        {
            ans.push_back(vector<double>());
        }

        ans[level].push_back(root->val);
        recurse(root->left,level+1,ans);
        recurse(root->right,level+1,ans);
    }
    vector<double> averageOfLevels(TreeNode* root) {
        vector<vector<double>>ans;
        recurse(root,0,ans);
        for(int i=1;i<ans.size();i++)
        {
            double sum=0;
            int n=ans[i].size();
            for(int j=0;j<n;j++)
            {
                sum+=ans[i][j];
            }
            ans[0].push_back(sum/n);
        }
        return ans[0];

    }
};