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
    int steps=0;
    int postorder(TreeNode* root){
        if(root==NULL) return 0;
        int left=postorder(root->left);
        int right=postorder(root->right);
        int coins=root->val + left + right -1;
        steps+=abs(coins);
        return coins;
        
    }
    int distributeCoins(TreeNode* root) {
        postorder(root);
        return steps;
    }
};