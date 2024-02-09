//https://www.hackerearth.com/problem/algorithm/monk-and-divisor-conundrum-56e0eb99/
// Here is another task for you, prepared by Monk himself. So, this is how it goes :

// Given an integer array A of size N, Monk needs you to answer T queries for him. In each query, he gives you 2 integers P and Q. In response to each of these queries, you need to tell Monk the count of numbers in array A. that are either divisible by P, Q, or both.
#include <bits/stdc++.h>
using namespace std;
const int N = 2e5+10;
int hsh[N];
int multipulse_ct[N];

int main() {
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		int x;
		cin >> x;
		hsh[x]++;
	}
	for(int i=1;i<N;i++){
		for(int j=i;j<N;j+=i){
			multipulse_ct[i] += hsh[j];
		}
	}
	int que;
	cin >> que;
	while(que--){
		int p,q;
		cin >> p >> q;
		long long lcm = (p * 1LL * q) / __gcd(p,q);
		long ans = multipulse_ct[p]+multipulse_ct[q];
		if(lcm<N) ans -= multipulse_ct[lcm];
		cout << ans << '\n';

	}
}