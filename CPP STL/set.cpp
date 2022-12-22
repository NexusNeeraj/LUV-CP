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