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
    TreeNode* insert(TreeNode* root , int x){
        if(root == NULL){
            TreeNode* temp = new TreeNode(x);
            return temp;
        }
        else if(root->val > x)
            root->left = insert(root->left,x);
        else 
            root->right = insert(root->right,x);
        return root;
        
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) {
       
        TreeNode* root = NULL;
        for(int i= 0 ; i<preorder.size();i++){
            root = insert(root , preorder[i]);
        }
        return root;
    }
};