#include<bits/stdc++.h>
using namespace std;

int main(){
      // swaping numbers using xor
      int a = 4,b = 6;
      a = a ^ b;
      b = b ^ a; // b --> a
      // b = b ^ (a ^ b) ==> b ^ b ^ a

      a = a ^ b; // a --> b
      // a = (a ^ b) ^ a ==> a ^ a ^ b --> b
      cout << a << " " << b << endl;

}