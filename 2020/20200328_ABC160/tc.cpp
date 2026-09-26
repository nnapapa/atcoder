#include <bits/stdc++.h>
using namespace std;

#define INF 0x7fffffff
#define ll	long long

int main() {
	ll		c,i,j,k,n,m,x,y,ans = 0;

	cin >> k >> n;
	vector<ll> a(n),b(n);

	for(i=0;i<n;i++) {
		cin >> a[i];
	}
	for(i=0;i<n-1;i++) {
		b[i] = a[i+1] - a[i];
		ans += b[i];
	}
	b[n-1] = k - a[n-1] + a[0];
	ans += b[n-1];

	m = 0;
	for(i=0;i<n;i++) {
		m = max(m , b[i]);
	}

	cout << ans - m << endl;


}
