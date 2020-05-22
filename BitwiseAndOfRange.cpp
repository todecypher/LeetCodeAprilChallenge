class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        //find last set bit
        
        if(n-m < 100000){
            long long ans = n;
            for(long long i =m ;i<=n;i++){
                    ans &=i;                
            }
            return ans;
        }
        int lBit=-1 , rBit=-1;
        int ct= 0;
        while(m){
            if(m&1) 
                lBit= max(lBit ,ct);
            ct++;
            m>>=1;
        }
        ct=0;
        while(n){
            if(n&1) 
                rBit= max(rBit ,ct);
            ct++;
            n>>=1;
        }
     if(lBit == rBit){
         return pow(2,lBit);
     }
     else return 0;
    }
};
