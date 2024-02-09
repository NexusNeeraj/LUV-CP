// Brute force Approach

// #include <bits/stdc++.h>
// using namespace std;

// const int N = 1e5 + 10;
// int h[N];

// int func(int i){
//       if(i == 0){
//         return;
//       }
      
//       int cost = INT_MAX;
//       // 1 Way
//       cost = min(cost,func(i-1) + h[i] - h[i-1]);
//       // 2 Way
      
//       if(i > 1)
//         cost = min(cost,func(i-2) + h[i] - h[i-2]);
      
//       return cost;
// }

// int main(){

//       int n;
//       cin >> n;
//       for(int i = 0; i < n; i++){
//         cin >> h[i];
//       }
//       int ans = func(n-1);
//       cout << ans << endl;

//       return 0;

// }

// Dp Approach

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int h[N];
int dp[N];

int func(int i){
      if(i == 0){
        return 0;
      }
      if(dp[i] != -1) return dp[i];
      int cost = INT_MAX;
      // 1 Way
      cost = min(cost,func(i-1) + abs(h[i] - h[i-1]));
      // 2 Way
      
      if(i > 1)
        cost = min(cost,func(i-2) + abs(h[i] - h[i-2]));
      
      return dp[i] = cost;
}

int main(){
      memset(dp, -1, sizeof(dp));
      int n;
      cin >> n;
      for(int i = 0; i < n; i++){
        cin >> h[i];
      }
      int ans = func(n-1);
      cout << ans << endl;

      return 0;

}

