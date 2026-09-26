//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,d,w,h,i,j,k,l,m,n,x,y,z;
	ll		ans = -INFL;
	string	s;
	cin >> n >> k;
	vector<ll>	p(n+1),c(n+1),f(n+1),t,tc,tc1,tc2;
	for(i=1;i<=n;i++) cin >> p[i];
	for(i=1;i<=n;i++) cin >> c[i];

	for(i=1;i<=n;i++) {
		if (f[i]==1) continue;
		t.clear();
		j = i;
		l = m = 0;
		while(f[j]==0) {
			l++;
			f[j]=1;
			t.push_back(c[p[j]]);
			m += c[p[j]];
			j = p[j];
		}

		tc.clear();
		tc = t;
		for(x=0;x<t.size();x++) tc.push_back(t[x]);
		tc1.clear();
		tc1 = tc;
		for(j=0;j<tc.size()-1;j++) {
			tc1[j+1] = tc1[j] + tc[j+1];
		}

		if (k>l) z = l;
		else z = k;

		while(z!=0) {
			for(j=0;j<tc.size();j++) {
				if (j>=z) {
					y = tc1[j] - tc1[j-z];
					if (m>0 && (k-z)>=l) y += m*((k-z)/l);
					ans = max(ans , y);
				}
			}
			z--;
		}
	}

	cout << ans << endl;
	return 0;
}
