#include <bits/stdc++.h>
using namespace std;

class Solution{
      public:

      long maximumSumSubarray(int K, vector<int> &Arr , int N)
      {
 
            int i = 0, j = 0;
            long long sum = 0;
            long long mx = 0;
            while(j < N){
                  sum += Arr[j];
                  if(j - i + 1 < K) j++;
                  else if(j - i + 1 == K){
                        mx = max(sum,mx);
                        sum -= Arr[i];
                        j++;
                        i++;
                  }
            }
            return mx;
      }


};

int main(){

      int t;
      cin >> t;
      while(t--){
            int N,K;
            cin >> N >> K;
            vector<int> Arr
            for(int i = 0; i < N; i++){
                  int x;
                  cin >> x;
                  Arr.push_back(x);
            }
            Solution obj;
            cout << obj.long maximumSumSubarray(K, Arr , N) << endl;
      }

      return 0;
}
