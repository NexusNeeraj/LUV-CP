// memeoization -> top down 

#include <bits/stdc++.h>
using namespace std;

int f(int n, vector<int> &dp){
      if(n <= 1) return n;

      if(dp[n] != -1) return dp[n];

      return dp[n] = f(n-1, dp) + f(n-2, dp);
}


int main(){
      int n;
      cin >> n;
      vector<int> dp(n+1, -1);
      cout << f(n, dp);
      return 0;
}

// T.C. -> O(N)
// S.C. -> O(N)(recursion stack) + O(N)(dp)

// tabulation -> bottom-up

#include <bits/stdc++.h>
using namespace std;

int f(int n, vector<int> &dp){
      dp[0] = 0;
      dp[1] = 1;

      for(int i = 2; i <= n; i++){
            dp[i] = dp[i-1] + dp[i-2];
      }
      return dp[n];
}


int main(){
      int n;
      cin >> n;
      vector<int> dp(n+1, -1);
      cout << f(n, dp);
      return 0;
}

// T.C. -> O(N)
// S.C. -> O(N)


// tabulation -> bottom up
// space optimization

#include <bits/stdc++.h>
using namespace std;


int main(){
      int n;
      cin >> n;
      int prev2 = 0;
      int prev1 = 1;
      for(int i = 2; i <= n; i++){
            int curi = prev + prev2;
            prev2 = prev;
            prev = curi;
      }
      cout << prev << endl;
      return 0;
}