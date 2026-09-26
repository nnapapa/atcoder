//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,i,j,k,n,m,x,y,ans = 0;
	ll		ans2 = 0;
	string	s;

	cin >> n >> k;
	vector<int>	A(n);
	for(i=0;i<n;i++) {
		cin >> A[i];
	}
	vector<ll> AA(2*n);

	for(i=1;i<2*n;i++) {
		for(j=0;j<i;j++) {
			if (A[i%n]<A[j%n]) AA[i]++;
		}
	}
	for(i=0;i<n;i++) {
		ans += AA[i];
		ans %= 1000000007;
	}
	
	/*if (k==2) {
		for(i=n;i<2*n;i++) {
			ans += AA[i];
			ans %= 1000000007;
		}
	} else*/ 
	if (k>1) {
		for(i=n;i<2*n;i++) {
			ans2 += (AA[i]-AA[i-n])*(k-1)*k/2;
			ans2 %= 1000000007;
			ans2 += AA[i-n]*(k-1);
			ans2 %= 1000000007;
		}
		ans += ans2;
		ans %= 1000000007;
	}
	/*
	for(i=0;i<2*n;i++) {
		cout << AA[i] << ' ';
	}
	cout << endl;
	*/
	cout << ans << endl;
	return 0;
}
