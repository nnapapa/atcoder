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
	vector<ll>	a(n+1,INFL);	
	for(i=1;i<=n;i++) {
		cin >> a[i];
	}
	j = 1;
	for(i=1;i<=n;i++) {
		j=a[j];
		if (j==2) break;
	}

	if (j==2) {
		cout << i << endl;
	} else {
		cout << -1 << endl;
	}
	return 0;
}
