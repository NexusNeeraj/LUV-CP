#include <bits/stdc++.h>
using namespace std;

int main(){

      cout << [](int x,int y){return x+y;}(2,4) << endl;// 6


      auto sum = [](int x,int y){return x+y;};  // yaha pe sum ek function ho gaya h
      cout << sum(2,5) << endl;


      vector<int> v = {2,4,5};
      cout << all_of(v.begin(),v.end(),[](int x){return x>0;}) << endl;

      cout << any_of(v.begin(),v.end(),[](int x){return x>0;}) << endl;

      cout << none_of(v.begin(),v.end(),[](int x){return x>0;}) << endl;



}
