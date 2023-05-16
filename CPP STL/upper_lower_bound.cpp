#include<bits/stdc++.h>
using namespace std;

// lower bound me agar element present nahi h to uska next greater element de deta h
int main(){
      int n;
      int a[n];// 4 5 5 25 7 8
      for(int i=0;i<n;i++){
            cin >> a[i];
      }
      sort(a,a+n);// 4 5 5 7 8 25
      for(int i=0;i<n;i++){
            cout << a[i] << " ";
      }
      cout << endl;
      int *ptr = lower_bound(a,a+n,5);
      //int *ptr = upper_bound(a,a+n,5);
      if(ptr == a+n){
            cout << "NOT found";
      }
      cout << (*ptr) << endl;

      // for vector
      int n;
      vector<int> a[n];// 4 5 5 25 7 8
      for(int i=0;i<n;i++){
            cin >> a[i];
      }
      sort(a.begin(),a.end());// 4 5 5 7 8 25
      for(int i=0;i<n;i++){
            cout << a[i] << " ";
      }
      cout << endl;
      auto it = lower_bound(a.begin(),a.end(),5);
      //auto it = upper_bound(a.begin(),a.end(),5);
      if(it == a.end()){
            cout << "NOT found";
      }
      cout << (*it) << endl;

      // for set and map
      set<int> s;
      map<int,int> m;
      for(int i=0;i<n;i++){
            int x;
            cin >> x;
            s.insert(x);
      }
      for(int i=0;i<n;i++){
            auto it = s.lower_bound(5);
      }
      cout << (*it) << endl;



}
