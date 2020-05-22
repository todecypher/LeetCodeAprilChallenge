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
   
    int solve(TreeNode* root,int &ans){
         if(!root) return 0;
        int root_val = root->val;
        int  L = solve(root->left,ans)+root_val;
        int  R = solve(root->right,ans)+root_val;
        int  T = root_val;
        ans = max({ans , max(L,R) , L+R - T,T});
        return max({L, R, T});
    }
    int maxPathSum(TreeNode* root) {
       int ans = INT_MIN;
       solve(root , ans);
        return (ans ==INT_MIN ? 0 : ans);
    }
};