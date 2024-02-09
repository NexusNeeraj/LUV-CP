#include <bits/stdc++.h>
using namespace std;

// printing 1 to n
// void print(int i,int n){
//     if(i>n) return;
//     cout << i << " ";
//     print(i+1,n);
// }

// printing n to 1
// void print(int n,int i){
//     if(n<i) return;
//     cout << n << " ";
//     print(n-1,i);
// }

// by backtracking n to 1
// void print(int i,int n){
//     if(i>n) return ;
//     print(i+1,n);
//     cout << i << " ";
// }

// by backtracking 1 to n;
void print(int i,int n){
    if(i<1) return;
    print(i-1,n);
    cout << i << " ";
}


int main() {
    
    int n;
    cin >> n;
    print(n,n);
    
    
    return 0;
}