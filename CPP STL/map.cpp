#include<bits/stdc++.h>
using namespace std;

// map me value sorted order me store hoti h aur map me unique key store hoti h aur map me kisi bhi value ko store karne ki time complexity O(log(n)) hoti h aur excess karne ki bhi O(log(n)) hoti h inbuilt implementation red black tree pe hoti h

int main(){
      map<int,string > m;
      m[1] = "abc"; // O(log(n));
      m[5] = "cdc";
      m[3] = "acd";
      m.insert({4,"afg"});
      // map<int,string> :: iterator it;
      // for(it = m.begin();it != m.end(); it++){
      //       cout << (*it).first << " " << (*it).second << endl;
      // }
      //OR
      for(auto &pr : m){
            cout << pr.first << " " << pr.second << endl;
      }

      auto it = m.find(7); // O(log(n))
      if(it == m.end()){
            cout << "NO VALUE";
      }
      else{
            cout << (*it).first << " " << (*it).second << endl;
      }
      m.erase(3);
      m.clear();//clear all the map
}
