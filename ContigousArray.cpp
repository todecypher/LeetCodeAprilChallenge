class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int zero = 0 , one= 0;
        for(auto &i: nums) {
            if(i==0) i=-1;
        }
        map<int ,int > mp;

        mp[0] = -1;

        int res = 0 , sum=0;
        for(int i =0 ; i<nums.size();i++){
            sum+=nums[i];
            if(mp.count(sum)){
                res =max(res , i- mp[sum]);
            }
            else
              mp[sum] =i ;
        }
        return res;
    }
};