#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s){
      for(string value : s){
            cout << value << endl;
      }
      
}

int main(){
      unordered_set<string> s;
      s.insert("abs"); // O(1)
      s.insert("zsdf");
      s.insert("bcd");
      auto it = s.find("abcd"); // O(1)
      if(it != s.end()){
            cout << (*it);
      }
      s.erase("bcd");
      print(s);




      multiset<string> s;
      s.insert("abc"); // O(log(n))
      s.insert("zsdf");
      s.insert("bcd");
      s.insert("abc");
      // auto it = s.find("abc"); // O(log(n))
      // if(it != s.end()){
      //       s.erase(it);// ye ek abc ko delete karega
      // }
      //s.erase("abc"); //ye sare abc ko deletr karega
      print(s);
}