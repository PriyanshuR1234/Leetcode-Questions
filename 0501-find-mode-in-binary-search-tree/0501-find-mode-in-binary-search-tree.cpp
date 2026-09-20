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
    void recurse(TreeNode * root, unordered_map<int,int>&map,int &maxfreq,vector<int> &num)
    {
        if(root==NULL)return;

        map[root->val]++;
        if(map[root->val]==maxfreq)
        {   
            num.push_back(root->val);
        }
        if(map[root->val]>maxfreq)
        {
            maxfreq=map[root->val];
            while(num.size()>0)
            {
                num.pop_back();
            }
            num.push_back(root->val);
        }

        recurse(root->left,map, maxfreq, num);

        recurse(root->right,map, maxfreq, num);
    }
    vector<int> findMode(TreeNode* root) {
        unordered_map<int,int>map;
        int maxfreq=0;
        vector<int>num;
        recurse(root,map,maxfreq,num);
        return {num};

    }
};