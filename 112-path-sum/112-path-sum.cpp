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
bool hasPathSum(TreeNode* root, int targetSum) {
    if(root == NULL){
        return false;
    }
    if(root->right == NULL && root->left == NULL){
        if(targetSum == root->val){
            return true;
        }
        else {
        return false;
        }
    }
    return hasPathSum(root->right, targetSum - root->val) || hasPathSum(root->left, targetSum - root->val);
}
};