/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int ans;
    Solution(){
        ans = INT_MIN;
    }
    
    int help(TreeNode* root , int& height){
        if(root== NULL) return 0;
        
        int l = help(root->left,height);
        int r = help(root->right,height);
        
        height = max(height ,l+r+1);
        return 1+max(l,r);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;
         int ans =0;
         help(root , ans);
         return ans-1;
        
    }
};