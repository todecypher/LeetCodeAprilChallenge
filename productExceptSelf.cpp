class Solution {
public:
    vector<int> productExceptSelf(vector<int>&a) {
        int n = a.size();
        vector<int> res;
        for(auto i : a) res.push_back(i);
        for(int i= 1;i<n;i++) a[i] *=a[i-1];
        for(int i =n-2 ;i>=0;i--) res[i] *=res[i+1];
        for(int  i = 0;i<n;i++){
            if(i==0)
                res[i] = res[1];
            else if(i ==n-1)
                res[i] = a[n-2];
            else
                res[i] =(a[i-1]*res[i+1]);
        }
        return res;
    }
};