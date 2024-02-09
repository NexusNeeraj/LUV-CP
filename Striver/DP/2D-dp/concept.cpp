int f(int day, int last, vector<vector<int>> &points, vector<vector<int>>&dp){

    // base case
    if(day == 0){
        int maxi = 0;
        for(int task = 0; task < 3; task++){
            if(task != last)
                maxi = max(maxi, points[0][task]);
        }
        return maxi;
    }

    if(dp[day][last] != -1) return dp[day][last];

    int maxi = 0;
    for(int task = 0; task < 3; task++){
        if(task != last){
            int point = points[day][task] + f(day-1, task, points, dp);
            maxi = max(maxi, point);
        }
    }
    return dp[day][last] = maxi;

}
// 0 -> task 0 means task 0 is choosen
// 1 -> task 1 means task 1 is choosen
// 2 -> task 2 means task 2 is choosen
// 3 -> task 3 means none of the task is choosen

// t.c. -> O(N*4)*3
// s.c. -> O(N) + O(N*4)

int ninjaTraining(int n, vector<vector<int>> &points)
{
    // Write your code here.
    vector<vector<int>>dp(n, vector<int>(4, -1));
    return f(n-1, 3, points, dp);
}