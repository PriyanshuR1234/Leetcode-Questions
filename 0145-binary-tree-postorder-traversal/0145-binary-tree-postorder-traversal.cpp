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
    vector<int>traversal(vector<int> &ans,TreeNode * temp)
{

    if(temp==NULL) return ans;
    
    
        
        traversal(ans,temp->left);
        traversal(ans,temp->right);
        ans.push_back(temp->val);
return ans;
    
}
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        ans=traversal(ans,root);
        return ans;
    }
};