class Solution {
public:
    // memoization
    // T.C. -> O(N*M)
    // S.C -> O(N*M) + O((N-1) + (M-1))

    long long f(int i, int j, vector<vector<int>>& grid , vector<vector<long long>>&dp){
        
        if(i == 0 && j == 0){
            return grid[0][0];
        }
        if(i < 0 || j < 0) return INT_MAX;
        if(dp[i][j] != -1) return dp[i][j];
        long long up = grid[i][j] + f(i-1, j, grid, dp);
        long long left = grid[i][j] + f(i, j-1, grid, dp);
        
        return dp[i][j] = min(up, left);
    }

    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<long long>>dp(n, vector<long long>(m, -1));
        return f(n-1, m-1, grid, dp);
    }
};

class Solution {
public:
    // memoization
    // T.C. -> O(N*M)
    // S.C -> O(N*M) + O((N-1) + (M-1))

    long long f(int i, int j, vector<vector<int>>& grid , vector<vector<long long>>&dp){
        
        if(i == 0 && j == 0){
            return grid[0][0];
        }
        if(i < 0 || j < 0) return INT_MAX;
        if(dp[i][j] != -1) return dp[i][j];
        long long up = grid[i][j] + f(i-1, j, grid, dp);
        long long left = grid[i][j] + f(i, j-1, grid, dp);
        
        return dp[i][j] = min(up, left);
    }

    int minPathSum(vector<vector<int>>& grid) {
        //Tabulation
        // T.C. -> O(N*M)
       // S.C -> O((N-1) + (M-1))
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>dp(n, vector<int>(m, 0));

        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(i == 0 && j == 0) dp[0][0] = grid[0][0];
                else{
                    int up = grid[i][j];
                    if(i > 0) up +=  dp[i-1][j];
                    else up += 1e9;
                    int left = grid[i][j];
                    if(j > 0) left += dp[i][j-1];
                    else left += 1e9;
                    dp[i][j] = min(up, left);
                } 
            }
        }
        return dp[n-1][m-1];

    }
};


// space optimization
class Solution {
public:
    // memoization
    // T.C. -> O(N*M)
    // S.C -> O(N*M) + O((N-1) + (M-1))


    int minPathSum(vector<vector<int>>& grid) {
        //Tabulation
        int n = grid.size();
        int m = grid[0].size();
        // space optimization
        vector<int> prev(m, 0);
        for(int i = 0; i < n; i++){
            vector<int> cur(m, 0);
            for(int j = 0; j < m; j++){
                if(i == 0 && j == 0) cur[j] = grid[i][j];
                else{
                    int up = grid[i][j];
                    if(i > 0) up +=  prev[j];
                    else up += 1e9;
                    int left = grid[i][j];
                    if(j > 0) left += cur[j-1];
                    else left += 1e9;
                    cur[j] = min(up, left);
                } 
            }
            prev = cur;
        }
        return prev[m-1];

    }
};