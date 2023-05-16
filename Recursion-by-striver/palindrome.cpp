#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// palindrome check
void f(int i,int arr[],int n){
      if(i>=n/2) return;

      swap(arr[i],arr[n-i-1]);
      f(i+1,arr,n);
}

bool f(int i,string &s){
      if(i >= s.size()/2) return true;
      if(s[i] != s[s.size()-i-1]) return false;
      return f(i+1,s);
}

int main(){




      return 0;
}
