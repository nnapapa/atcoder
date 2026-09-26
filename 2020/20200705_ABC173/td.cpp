//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

ll n;
vector<ll>	a(200001);

int main() {
	ll		b,c,h,i,j,k,l,m,x,y;
	ll		ans = 0;
	string	s;
	cin >> n;

	for(i=0;i<n;i++) cin >> a[i];
	sort(a.begin(), a.end());
	reverse(a.begin(), a.end());
	ans = a[0];
	x = 2;

	for(i=2;i<n;i++) {
		ans += a[x/2];
		x++;
	}
	cout << ans << endl;
	return 0;
}
