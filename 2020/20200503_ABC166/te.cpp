//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		b,c,i,j,k,n,m,x,y,ans = 0;
	

	cin >> n;
	vector<ll> a(n+1);
	map<ll,ll> ii,jj;
	for(i=1;i<=n;i++) {
		cin >> a[i];
		ii[i+a[i]]++;
		jj[i-a[i]]++;
	}

	for(i=1;i<n;i++) {
		ans += ii[i]*jj[i];
	}


	cout << ans << endl;

}
