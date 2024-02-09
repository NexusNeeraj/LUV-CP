// print a single subsequences whose sum is equal to k

#include <bits/stdc++.h>
using namespace std;

bool printF(int ind,vector<int> &ds,int s,int sum,int arr[],int n){
      if(ind == n){
            if(s == sum){
                  for(auto it:ds){
                        cout << it << " ";
                  }
                  cout << endl;
                  return true;
            }
            // condition not satisfied
            else return false;
      }
      // take or pick the particular index into the subsequence
      ds.push_back(arr[ind]);
      s += arr[ind];

      if(printF(ind + 1,ds,s,sum,arr,n)) return true;

      s -= arr[ind];
      ds.pop_back();

      // not pick, or not take condition, this element is not added to your subsequence
      if(printF(ind + 1,ds,s,sum,arr,n)) return true;

      return false;
}

int main(){

      int arr[] = {1,2,1};
      int n = 3;
      int sum = 2;
      vector<int> ds;
      printF(0,ds,0,sum,arr,n);

      return 0;

}

