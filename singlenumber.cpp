class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xori =0 ;
        for(auto i : nums) xori ^=i;
        return xori;
    }
};