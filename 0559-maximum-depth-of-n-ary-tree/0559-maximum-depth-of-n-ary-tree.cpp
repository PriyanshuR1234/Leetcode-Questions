/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void recurse(Node * root, int level,int &depth)
    {
        if(root==NULL)return ;
        depth=max(depth,level);
        for(Node* n:root->children)
        {
            recurse(n,level+1,depth);
        }
        
    }
    int maxDepth(Node* root) {
        int depth=0;
        recurse(root,1,depth);
        return depth;
        
    }
};