// Problem Statement
//Given a binary tree, determine if it is height-balanced.
//
//For this problem, a height-balanced binary tree is defined as:
//
//a binary tree in which the left and right subtrees of every node differ in height by no more than 1

//Input: root = [3,9,20,null,null,15,7]
//Output: true


class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(!root)return true;
      
        int lh=maxDepth(root->left);
        int rh=maxDepth(root->right);
        if(lh==-1||rh==-1)return false;
        if(abs(lh-rh)>1)return false;
        if(!isBalanced(root->left)||!isBalanced(root->right))return false;
        return true;
    }
    
    int maxDepth(TreeNode*root){
        if(!root)return 0;
        int lh=maxDepth(root->left);
        int rh=maxDepth(root->right);
        if(abs(lh-rh)>1)return -1;
        return max(lh,rh)+1;
    }
};

