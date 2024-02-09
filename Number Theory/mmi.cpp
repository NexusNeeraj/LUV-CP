#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int M = 1e9+7;


int binexp(int a,int b,int m){
      int result = 1;
      while(b>0){
            if(b & 1){
                  result = (result * 1ll * a)%m;
            }
            a = (a * 1ll * a) % m;
            b >>= 1;
      }
      return result;
}



int main(){
      // int a;
      // binexp(a,M-2,M);
      cout << binexp(2,M-2,M) << endl;
}