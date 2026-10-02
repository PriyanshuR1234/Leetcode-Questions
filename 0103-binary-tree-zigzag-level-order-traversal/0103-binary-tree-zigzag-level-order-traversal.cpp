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
    void recurse( TreeNode * root, vector<vector<int>>& ans, int level)
    {
        if(root==NULL)return ;

        if(level==ans.size())
        {
            ans.push_back(vector<int>());
        }

        ans[level].push_back(root->val);

        recurse(root->left,ans,level+1);
        recurse(root->right, ans, level+1);
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        recurse(root,ans,0);
        for(int i=0;i<ans.size();i++)
        {
            if(i%2!=0)
            {
                reverse(ans[i].begin(),ans[i].end());
            }
        }
        return ans;
    }
};