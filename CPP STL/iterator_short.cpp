 //support c++ 11 or above this function
 #include <bits/stdc++.h>
 using namespace std;

 int main(){
      vector<int> v = {2,3,4,5,6,7};
      for(int i=0;i<v.size();i++){
            cout << v[i] << " ";
      }
      cout << endl;
      vector<int> :: iterator it;
      for(it=v.begin();it!=v.end();it++){
            cout << (*it) << " ";
      }cout << endl;
      for(int value:v){ // value me copy pass ho rahi h
            cout << value << " ";
      }
      cout << endl;

      // for(int &value:v){ // actual value pass ho rahi h
      //       cout << value << " ";
      // }
      // cout << endl;



      // vector<int> :: iterator it; isko replace kr do auto se wo bhi for loop ke ander
      for( auto it=v.begin();it!=v.end();it++){
            cout << (*it) << " ";
      }cout << endl;


 }