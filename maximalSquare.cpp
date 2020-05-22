class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int n , m ;
        n = matrix.size();
        if(n==0) return 0;
        m = matrix[0].size();
         
        int dp[n][m];
        
        for(int i =0 ; i<n;i++){
            for(int j =0;j<m;j++){
                if(i==0 || j==0){
                    dp[i][j] = matrix[i][j] -'0';
                    continue;
                }
                if(matrix[i][j] == '1'){
                    dp[i][j] = 1+min({dp[i-1][j] , dp[i-1][j-1] , dp[i][j-1]}) ; 
                }
                else 
                    dp[i][j] = 0;
            }
        }
        int maxi = 0; 
        for(int i =0 ; i<n;i++)
            for(int j=0;j<m;j++)
                maxi = max(dp[i][j] , maxi);
        return maxi*maxi;
    }
};