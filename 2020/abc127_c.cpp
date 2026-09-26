//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,i,j,k,n,m,x,y,ans = 0;
	string	s;

	cin >> n >> m;
	vector<int> l(m),r(m);

	for(i=0;i<m;i++) {
		cin >> l[i] >> r[i];
	}

	sort(l.begin(), l.end());
	sort(r.begin(), r.end());

	ans = max(0 , r[0]-l[m-1]+1);

	cout << ans << endl;
	return 0;
}
