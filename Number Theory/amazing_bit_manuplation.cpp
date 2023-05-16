#include<bits/stdc++.h>
using namespace std;

void printBinary(int num){
      for(int i = 10; i >= 0; --i){
            cout << ((num >> i) & 1);
      }
      cout << endl;
}

int main(){
      // even odd check
      for(int i = 0; i < 8; ++i){
            printBinary(i);
            if(i&1) cout << "odd" << endl;
            else cout << "even" << endl;
      }

      // multiply divivde

      int n = 5;
      cout << (n >> 1) << endl;
      cout << (n << 1) << endl;

      char B = 'B';
      // upperCase to lowerCase conversion
      char b = B | ' ';
      cout << b << endl;

      // lowerCase to upperCase  conversion
      char d = 'd';
      char D = (d & '_');

      cout << D << endl;

      // clear lsb
      printBinary(59);
      int a = 59;
      int i = 4;// clear 0 to 4th bit 
      int b = (a & (~((1<<(i+1))-1)));
      printBinary(b);

      // clear msb
      i = 3;
      int c = (a & ((1<<(i+1))-1));
      printBinary(c);

      // power of 2 check
      int n = 15;
      if(n & (n-1)) cout << "not power of 2" << endl;
      else cout << "power of 2" << endl;


}