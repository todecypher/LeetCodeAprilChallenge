class Solution {
public:
    bool backspaceCompare(string S, string T) {
       int i = S.length() -1;
       int j = T.length() -1;
        int one =0 , two =0;
        bool ok = true;
        while(i >=0 || j>=0){
            
            
            if(S[i] == '#' || T[j] =='#' ){
                
                if(i>=0 and S[i] =='#')
                        one++ ,i--;
                if(j>=0 and T[j] =='#')
                        two++ ,j--;
                continue;
            }
            if(one>0){
                i--;
                continue;
            }
            if(two >0){
                j--;
                continue;
            }
            
            if(S[i]!=T[j])
                return false;
            i--;j--;
        }
        
        return true;
    }
};

