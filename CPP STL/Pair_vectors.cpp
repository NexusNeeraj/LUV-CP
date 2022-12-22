#include <bits/stdc++.h>
using namespace std;

int main(){
      pair<int,string> p; // any pair can be made char ,double bool,string
      // p = make_pair(2,"abc");
      p = {2,"abc"}; // aise bhi pair bana sakte h 
      pair<int,string> &p1 = p;
      p1.first = 3;
      cout << p.first << " " << p.second << endl;
      int a[] = {1,2,3};
      int b[] = {2,3,4};
      pair<int,int> p_array[3];
      p_array[0] = {1,2};
      p_array[1] = {2,3};
      p_array[2] = {3,4};
      swap(p_array[0],p_array[2]);
      for(int i=0;i<3;i++){
            cout << p_array[i].first << " " << p_array[i].second << endl;
      }


      // pair<int,string> p;pair banakar
      // cin >> p.first; pair ke element ko scan kr sakte h 
      // cout << p.first; aur print bhi kr sakte h

}
