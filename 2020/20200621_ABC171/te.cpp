//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		b,c,h,i,j,k,l,m,n,q,x,y;
	int		ans = 0;
	string	s;
	cin >> n;
	vector<int>	a(n);
	for(i=0;i<n;i++) cin >> a[i];

	for(i=0;i<n;i++) {
		ans = ans ^ a[i];
	}
	for(i=0;i<n;i++) {
		if (i!=0) cout << ' ';
		cout << (ans ^ a[i]);
	}
	cout << endl;
	return 0;
}
