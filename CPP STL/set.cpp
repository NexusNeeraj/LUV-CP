#include<bits/stdc++.h>
using namespace std;
// set stores unique element while multi set store duplicate element also
void print(set<string> &s){
      for(string value : s){
            cout << value << endl;
      }
      // or
      // for(auto it = s.begin(); it != s.end();it++){
      //       cout << (*it) << endl;
      // }
}

int main(){
      set<string> s;
      s.insert("abs"); // O(log(n))
      s.insert("zsdf");
      s.insert("bcd");
      auto it = s.find("abcd"); // O(log(n))
      if(it != s.end()){
            cout << (*it);
      }
      s.erase("bcd");
      print(s);
}


//here is a simple formula for the sum of all subsets. Consider a set {a1, a2, ..., an}. There are 2^n subsets, and each ai exists in exactly 2^(n - 1) of them. Therefore, the sum of all subsets is equal to 2^(n - 1)(a1 + a2 + ... + an).
