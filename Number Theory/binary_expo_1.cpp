#include<bits/stdc++.h>

using namespace std;

const int M = 1e9+7;

int binExpRecur(int a,int b){
      if(b == 0) return 1;
      int res = binExpRecur(a,b/2);
      if(b&1) return (a*((res*1LL*res)%M))%M;
      else return (res*1LL*res)%M;
}

int binExpIter(int a,int b){
      int ans = 1;
      while(b){
            if(b&1){
                  ans = ans*a;
            }
            a = a*a;
            b >>= 1;
      }
}


int main(){
      int a = 2,b = 13;
      cout << binExpRecur(a,b) << "\n";
}