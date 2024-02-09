#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

const int N = 1e7+10; 
// Q < 10^7,N < 10^7
vector<bool> isPrime(N,1); 
vector<int> lp(N,0),hp(N,0);

int main(){

      isPrime[0] = isPrime[1] = false;
      for(int i=2;i<N;i++){
            if(isPrime[i] == true){
                  lp[i] = hp[i] = i;
                  for(int j = 2*i;j < N; j += i){
                        isPrime[j] = false;
                        hp[j] = i;
                        if(lp[j] == 0){
                              lp[j] = i;
                        }
                  }
            }
      }
      
      int num;
      cin >> num;
      vector<int> prime_factors;
      while(num>1){
            int prime_factor = hp[num];
            while(num%prime_factor == 0){
                  num /= prime_factor;
                  prime_factors.push_back(prime_factor);
            }
      }

      for(int factor:prime_factors){
            cout << factor << " ";
      }
      

      

}
