#include<bits/stdc++.h>
using namespace std;

void printBinary(int num){
      for(int i=10;i>=0;i--){
            cout << ((num>>i) & 1);
      }
      cout << endl;
}

int main(){

      printBinary(9);
      int a = 9;
      int i = 3;
      if((a & (1<<i)) !=0 ) cout << "Set Bit" << endl;
      else cout << "Not Set Bit" << endl;

      // bit set
      printBinary(a | (a<<i));//set ith bit

      // bit unset
      printBinary(a & (~(1<<i))); // unset ith bit

      // toggle 0->1 1->0
      printBinary(a ^ (1<<i)); // toggle ith bit


      int ct = 0;
      for(int i=31;i>=0;i--){// count no of 1's
            if((a & (1<<i)) != 0) ct++;
      }
      cout << ct << endl;

      cout << __builtin_popcount(a) << endl; // int
      cout << __builtin_popcountll((1LL<35)-1) << endl; // long long
      



}