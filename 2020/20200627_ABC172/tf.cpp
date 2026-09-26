//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,h,i,j,k,l,m,n,t,x,y;
	ll		ans = 0;
	string	s;
	cin >> n >> m >> k;

	vector<ll>	aa(n),az(n), bb(m),bz(m);
	x = y = 0;
	for(i=0;i<n;i++) {
		cin >> aa[i];
		if (i==0) az[x++] = aa[i];
		else if (az[x-1] != aa[i]) az[x++] = aa[i];
	}
	for(i=0;i<m;i++) {
		cin >> bb[i];
		if (i==0) bz[y++] = bb[i];
		else if (bz[y-1] != bb[i]) bz[y++] = bb[i];
	}

	a = 0; b = 0; x = 0; y = 0; t = 0;
	for(i=0;i<n+m;i++) {
		if (a==n) {
			if ((b!=0) && (bz[y]!=bb[b])) y++;
			t += bb[b++];
		} else if (b==m) {
			if ((a!=0) && (az[x]!=aa[a])) x++;
			t += aa[a++];
		} else if (aa[a]<bb[b]) {
			if ((a!=0) && (az[x]!=aa[a])) x++;
			t += aa[a++];
		} else if (aa[a]>bb[b]) {
			if ((b!=0) && (bz[y]!=bb[b])) y++;
			t += bb[b++];
		} else {
			ll ix = x;
			ll iy = y;
			if (az[x]<=bz[y]) {
				if ((a!=0) && (az[x]!=aa[a])) x++;
				t += aa[a++];
			} else {
				if ((b!=0) && (bz[y]!=bb[b])) y++;
				t += bb[b++];				
			}
		}
		if (t>k) break;
		ans++;
	}
	cout << ans << endl;
	return 0;
}
