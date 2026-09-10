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
    vector<int> countFind(TreeNode* root,int &count)
    {
        if(root==NULL)
        {
            return {0,0};
        }
        
        if(root->left==NULL && root->right==NULL)
        {
            count++;
            return {root->val,1};
        }

        vector<int>left=countFind(root->left,count);
        vector<int>right=countFind(root->right,count);
        int sum=root->val+left[0]+right[0];
        int total=left[1]+right[1]+1;

        if((sum)/(total)==root->val)
        {
            count++;
            cout<<root->val<<"->";
        }
        return {sum,total};
        
    }
    int averageOfSubtree(TreeNode* root) {
        vector<int>track(2,0);
        int count=0;
        countFind(root, count);
        return count;
    }
};