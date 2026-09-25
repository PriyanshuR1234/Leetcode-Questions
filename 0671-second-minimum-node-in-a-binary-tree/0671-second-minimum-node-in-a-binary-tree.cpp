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
bool flag=false;
    void recurse(TreeNode * root, int &firstSmall, int &secondSmall)
    {
        if(root==nullptr) return ;

        firstSmall=min(firstSmall,root->val);

        if(root->val!=firstSmall && root->val<=secondSmall)
        {
            secondSmall=root->val;
            flag=true;
        }
        recurse(root->left,firstSmall,secondSmall);
        recurse(root->right,firstSmall,secondSmall);
    }
    int findSecondMinimumValue(TreeNode* root) {
        int firstSmall=INT_MAX;
        int secondSmall=INT_MAX;


        recurse(root,firstSmall,secondSmall);
        if(flag==false) return -1;
        return secondSmall;
        
    }
};