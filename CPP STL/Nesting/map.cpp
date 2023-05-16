#include<bits/stdc++.h>
using namespace std;

int main(){
      map<set<int>,int> m;
      pair<int,int> p1, p2;
      p1 = {2,3};
      p2 = {2,4};
      cout << (p1 < p2) << endl;

      set<int> s1 = {1,2,3};
      set<int> s2 = {2,3};
      cout << (s1 < s2);
}