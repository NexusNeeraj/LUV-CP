#include <iostream>
#include <cmath>


int main(){

      int n;
      cin >> n;
      int ct = 0;
      int sum = 0;
      for(int i=1;i*i<=n;++i){
            if(n%i == 0){
                  cout << i << " " << n/i << endl;
                  ct += 1;
                  sum += i;
                  if(n/i != i){
                        ct += 1;
                        sum += n/i;
                  }
            }
      }
      cout << ct << " " << sum << endl;
      // O(sqrt(N))


      return 0;

}
