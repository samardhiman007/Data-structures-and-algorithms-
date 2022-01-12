//112. Path Sum
//Given the root of a binary tree and an integer targetSum, return true if the tree has a root-to-leaf path 
//such that adding up all the values along the path equals targetSum.
//A leaf is a node with no children.
//Input: root = [5,4,8,11,null,13,4,7,2,null,null,null,1], targetSum = 22
//Output: true
//Explanation: The root-to-leaf path with the target sum is shown.

//Input: root = [1,2,3], targetSum = 5
//Output: false
//Explanation: There two root-to-leaf paths in the tree:
//(1 --> 2): The sum is 3.
//(1 --> 3): The sum is 4.
//There is no root-to-leaf path with sum = 5.

//Solution

class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum){
        
        int sum=0;
        return helper(root,targetSum,sum);
    }
    bool helper(TreeNode* root,int target,int sum){
        
        if(!root) return false;
        
        sum+=root->val;
        
        if(sum==target and !root->left and !root->right)
            return true;
        
        return helper(root->left,target,sum) || helper(root->right,target,sum);
    }
};
