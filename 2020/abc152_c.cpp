//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,i,j,k,n,m,x,y,ans = 0;
	string	s;

	m = INF;
	cin >> n;
	for(i=0;i<n;i++) {
		cin >> a;
		if (m > a) ans++;
		m = min(m , a);
	}

	cout << ans << endl;
	return 0;
}
