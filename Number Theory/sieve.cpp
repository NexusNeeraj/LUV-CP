#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

const int N = 1e7+10; 
// Q < 10^7,N < 10^7
vector<bool> isPrime(N,1); 

int main(){

      isPrime[0] = isPrime[1] = false;
      for(int i=2;i<N;i++){
            if(isPrime[i] == true){
                  for(int j = 2*i;j < N; j += i){
                        isPrime[j] = false;
                  }
            }
      }


      int q;
      cin >> q;
      while(q--){
            int num;
            cin >> num;
            if(isPrime[num]){
                 cout << "prime\n"; 
            }
            else{
                  cout << "not prime\n";
            }
      }

}
