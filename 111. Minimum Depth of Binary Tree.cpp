//111. Minimum Depth of Binary Tree
//Given a binary tree, find its minimum depth.
//The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.
//Note: A leaf is a node with no children.
//
//Input: root = [3,9,20,null,null,15,7]
//Output: 2
//Example 2:
//
//Input: root = [2,null,3,null,4,null,5,null,6]
//Output: 5


class Solution {
public:
    int minDepth(TreeNode* root) {
        if(!root) return 0;
        int lf=0,rf=0;
        lf=minDepth(root->left);
        rf=minDepth(root->right);
        
        if(lf==0) return rf+1;
        if(rf==0) return lf+1;
        
        return min(lf,rf)+1;
        

    }
};
