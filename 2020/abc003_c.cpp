//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,i,j,k,n,m,x,y;
	double	ans = 0;
	string	s;

	cin >> n >> k;

	vector<int> r(n);
	for(i=0;i<n;i++) {
		cin >> r[i];
	}

	sort(r.begin(), r.end());
	reverse(r.begin(), r.end());

	for(i=0;i<k;i++) {
		ans = (ans+r[k-i-1])/2;
	}
	printf("%f\n",ans);
	return 0;
}
