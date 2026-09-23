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
    int prevVal = -1; 
    int minDiff = INT_MAX;

    void inOrder(TreeNode* root) {
        if (root == nullptr) return;

        
        inOrder(root->left);

      
        if (prevVal != -1) {
            minDiff = min(minDiff, root->val - prevVal);
        }
        prevVal = root->val; 
       
        inOrder(root->right);
    }

    int minDiffInBST(TreeNode* root) {
        inOrder(root);
        return minDiff;
    }
};