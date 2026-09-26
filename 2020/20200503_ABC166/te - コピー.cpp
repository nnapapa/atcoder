//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		b,c,i,j,k,n,m,x,y,ans = 0;
	string	s;

	cin >> n;
	vector<ll> a(n+1);
	for(i=1;i<=n;i++) {
		cin >> a[i];
	}

	for(i=1;i<n;i++) {
		for(j=i+1;j<=n;j++) {
			if (abs(i-j) == a[i]+a[j]) ans++;
		}
	}
	cout << ans << endl;

}
