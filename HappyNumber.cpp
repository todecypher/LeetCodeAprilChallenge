class Solution {
public:
    bool isHappy(int n) {
        string s = to_string(n);
        
        int tries  = 5;
        int sum =0;
        while(tries >=0){
            for(int i =0 ;i<s.length() ;i++) sum+= (s[i] -'0')*(s[i]-'0');
            s = to_string(sum);
            if(sum ==1) return 1;
            tries--;
            sum =0 ;
            
        }
        return 0;
    }
};