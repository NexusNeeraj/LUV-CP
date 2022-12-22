#include<bits/stdc++.h>
using namespace std;

// unordered map me value unsorted order me store hoti h  

int main(){
      // 1. inbuilt implementation -> Hash Table
      // 2. Time complexcity -> O(1)
      // 3. valid keys datatype
      unordered_map<int,string > m;
      m[1] = "abc"; // O(1);
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