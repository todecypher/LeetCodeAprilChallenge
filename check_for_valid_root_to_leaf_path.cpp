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
    bool check_for_valid(TreeNode* root,int index,string to_check ,string curr){
        // if(index == to_check.length()) {
        //     return (curr==to_check;
        // }
        if(!root) return false;
        if(root->left ==NULL && root->right ==NULL){
            if( (curr+to_string(root->val)) == to_check)
                return true;
            return false;
        }
       
        bool left = check_for_valid(root->left,index+1,to_check , curr+to_string(root->val));
        bool right = check_for_valid(root->right,index+1,to_check ,curr+to_string(root->val));
        return (left || right);
    }
    bool check2(TreeNode* root,int i ,int n,vector<int>&arr){
        if(!root) return false;
        int val  = root->val;
       
        if(i==n-1){
            return (!root->left && !root->right && arr[i] == val);
        }
         
        if(val == arr[i]){
             auto l= root->left;
             auto r= root->right;
            bool left = false ,right = false;
            if(r && r->val == arr[i+1])
                right = check2(r, i+1,n ,arr);
            if(l && l->val  == arr[i+1])
                left = check2(l,i+1,n,arr);
            if(left || right){
                    return true;
                }
            }
        return false;
        }

    bool isValidSequence(TreeNode* root, vector<int>& arr) {
        string to_check ;
        for(auto i : arr) 
            to_check+=(to_string(i));
        // cout<<to_check;
        // return check_for_valid(root,0 , to_check,"");
        return check2(root, 0 , arr.size() , arr);
    }
};
// [0,1,0,0,1,0,null,null,1,0,0]
// [0,0,1]

// [8,3,null,2,1,5,4]
// [8]

// [0,1,0,0,1,0,null,null,1,0,0]
//  [0,1,0,1]