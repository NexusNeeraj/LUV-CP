#include <iostream>

using namespace std;

// parameterised sum
void recSum(int n,int sum){
      if(n<1){
            cout << sum;
            return;
      }
      recSum(n-1,sum+n);

}

// functional sum

int recuSum(int n){
      if(n == 0) return 0;
      return n + recuSum(n-1);
}

int main() {

      int n;
      cin >> n;
      int sum = 0;
      recSum(n,sum);

}