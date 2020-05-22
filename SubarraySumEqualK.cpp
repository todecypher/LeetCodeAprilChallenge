class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum  =0; 
        int tail = 0;
        int ans = 0; 
        
        int n = nums.size();
        int pre[n];
        pre[0] = nums[0];
        
       unordered_map<int,int> mp ;
        mp[0]=1;
       for(int i= 0; i<n;i++){
           sum+=nums[i];
           if(mp[sum-k])
               ans+= mp[sum-k];
           mp[sum]++;
           
       }
        return ans;
    }
};