#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x3fffffffffffffffLL

vector<int> cnt(1500002,0);

int main() {
	ll		b,c,d,h,i,j,k,l,m,n,v,w,x,y,z,mn;
	ll		ans = INFL;
	string	s;
	cin >> n >> m;
	vector<int>	a(n);
	for(i=0;i<n;i++) cin >> a[i];
	for(i=0;i<m;i++) cnt[a[i]]++;
	for(i=0;i<=m;i++) if (cnt[i]==0) {mn=i; break;}
	for(i=0;i<n-m;i++) {
		cnt[a[i]]--;
		cnt[a[i+m]]++;
		if (cnt[a[i]]==0 & a[i]<mn) mn = a[i];
	}

	cout << mn << endl;
	return 0;
}
