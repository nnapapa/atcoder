//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,h,i,j,k,l,m,n,x,y;
	ll		ans = 0;
	string	s;
	cin >> n;
	vector<ll>	aa(n);
	for(i=0;i<n;i++) cin >> aa[i];

	sort(aa.begin(),aa.end());
	reverse(aa.begin(),aa.end());

	a = b = 0;
	for(i=0;i<n;i++) {
		if (i%2==0) {
			a += aa[i];
		} else {
			b += aa[i];
		}
	}
	cout << a-b << endl;
	return 0;
}
