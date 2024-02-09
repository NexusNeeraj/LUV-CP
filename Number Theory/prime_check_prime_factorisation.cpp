#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(){
      int n;
      cin >> n;

      // bool is_prime = true;
      // for(int i=2;i<n;i++){
      //       if(n%i == 0){
      //             is_prime = false;
      //             break;
      //       }
      // }
      // cout << is_prime;
      // O(n)

      // bool is_prime = true;
      // for(int i=2;i*i <=n;i++){
      //       if(n%i == 0){
      //             is_prime = false;
      //             break;
      //       }
      // } 
      // cout << is_prime;
      // O(sqrt(n))     

      vector<int> prime_factors;
      for(int i = 2; i*i <= n;++i){
            while(n%i == 0){
                  prime_factors.push_back(i);
                  n /= i;
            }
      }
      if(n>1){
            prime_factors.push_back(n);
      }
      // O(sqrt(N))
      for(int prime:prime_factors){
            cout << prime << " ";
      }

}