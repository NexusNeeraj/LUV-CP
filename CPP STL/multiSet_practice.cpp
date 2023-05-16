#include<bits/stdc++.h>
using namespace std;
// multi set also stores duplicate elements
// multiset and set stores element in sorted order
int main(){
      int t;
      cin >> t;
      while(t--){
            int n,k;
            cin >> n >> k;
            multiset<long long> bags;
            for(int i=0;i<n;i++){
                  int candy_ct;
                  cin >> candy_ct;
                  bags.insert(candy_ct);
            }
            long long total_candies = 0;
            for(int i=0;i<k;i++){
                  auto last_it = (--bags.end());//.end() end ke baad wla element hota h -- karne per last iterator last element ke equal ho jayega
                  int candy_ct = *last_it;
                  total_candies += candy_ct;
                  bags.erase(last_it);
                  bags.insert(candy_ct/2);
            }
            cout << total_candies << endl;
      }
}

// https://www.hackerearth.com/practice/data-structures/trees/heapspriority-queues/practice-problems/algorithm/monk-and-the-magical-candy-bags/
//another problem solution
// https://www.hackerearth.com/problem/algorithm/the-monk-and-class-marks/?fbclid=IwAR09BMLG-1NhqDlVQq0KIzSr8ZTgqrbJmdfnsXc7KnDiphgX5UmbFLoEYjE