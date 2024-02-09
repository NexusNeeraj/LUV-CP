// Using Recursion

// #include <bits/stdc++.h>
// using namespace std;

// const int N = 1e5 + 10;

// int fib(int n){
//       if(n == 0) return 0;
//       if(n == 1) return 1;
//       return fib(n-1) + fib(n-2);
// }
// T.C. -> O(2^n)


// int main(){
//       int n;
//       cin >> n;
//       cout << fib(n);
// }


// Using Dynamic Programming

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

int dp[N];
// Top Down Approach

int fib(int n){
      if(n == 0) return 0;
      if(n == 1) return 1;
      if(dp[n] != -1) return dp[n];// memoise
      return dp[n] = fib(n-1) + fib(n-2);
}

// T.C. -> O(n)

int main(){
      memset(dp, -1, sizeof(dp));
      int n;
      cin >> n;

      // Bottom Up Approach
      // dp[0] = 0;
      // dp[1] = 1;
      // for(int i = 2 ; i <= n ;i ++){
      //       dp[i] = dp[i-1] + dp[i-2];
      // }

      cout << fib(n);
}
// Approach to solve dp problem
//1. Try to write Brute Force Recursion
//2. then write dp   
