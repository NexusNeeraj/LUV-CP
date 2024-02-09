#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10;

// Given Q queries, Q <= 10^5 in each query given v, print subtree sum of v & number of even numbers in subtree of v

int subtree_sum[N];
int even_ct[N];

vector<int> g[N];


void dfs(int vertex,int par = 0){
      if(vertex%2 == 0) even_ct[vertex]++;
      subtree_sum[vertex] += vertex;
      for(int child:g[vertex]){
            if(child == par) continue;
            dfs(child,vertex);
            subtree_sum[vertex] += subtree_sum[child];
            even_ct[vertex] += even_ct[child];
      }
}


int main(){
      int n;
      cin >> n;

      for(int i=0; i<n-1; i++){
            int x,y;
            cin >> x >> y;

            g[x].push_back(y);
            g[y].push_back(x);

      }

      dfs(1);

      for(int i=1; i<=n; i++){
            cout << subtree_sum[i] << " " << even_ct[i] << endl;
      }

      // int q;
      // cin >> q;
      // while(q--){
      //       int v;
      //       cin >> v;
      //       cout << subtree_sum[v] << endl;
      // }
}

//input
// 13
// 1 2
// 1 3
// 1 13
// 2 5
// 3 4
// 5 6
// 5 7
// 5 8
// 8 12
// 4 9
// 4 10
// 10 11
