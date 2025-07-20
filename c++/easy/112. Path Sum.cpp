
//Approach: using recursion to traverse the tree
// check if the current node is null, return false  
// check if the current node's value equals targetSum and it's a leaf node, return true
// if the current node's value does not equal targetSum and it's a leaf node, return false 
// recursively call the function for left and right children, subtracting the current node's value from targetSum

class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {

        if (root == nullptr)
            return false;

        if (root->val == targetSum && root->left == nullptr && root->right == nullptr)
            return true;
        if (root->val != targetSum && root->left == nullptr && root->right == nullptr)
            return false;

            return (hasPathSum(root->left, targetSum - root->val) ||
            hasPathSum(root->right, targetSum - root->val));
     
    }
};