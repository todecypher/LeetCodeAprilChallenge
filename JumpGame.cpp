class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size()+1;
        int dp[n]; 
        memset(dp , 0 , sizeof dp);
        dp[0] = 1;
        for(int i= 0 ; i<nums.size();i++){
            if(dp[i] && nums[i]!=0){
                    int poss_jumps = nums[i];
                    for(int j=1;j<=poss_jumps;j++)
                        if(i+j <nums.size())
                            dp[i+j] = 1;
            }   
        }
        return dp[nums.size()-1];
    }
};