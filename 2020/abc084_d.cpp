#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
vector<int> memo(100001,-1);
vector<ll> ans(100001,0),total(100003,0);
int pf(ll n) {
	if (memo[n]!=-1) return memo[n];
  if (n<=1) return memo[n] = 0;
	for(ll i=2;i*i<=n;i++) {
		if (n%i==0) {
      return memo[n] = 0;
		}
	}
	return memo[n] = 1;
}

int main() {
	ll		q,a,b,c,d,h,i,j,k,m,n,v,w,x,y,z;
	cin >> q;
	vector<ll>	l(q),r(q),lr(q*2);
	for(i=0;i<q;i++) {
		cin >> l[i] >> r[i];
		lr[i*2] = l[i];
		lr[i*2+1] = r[i];
	}
	sort(lr.begin(),lr.end());
	ll lmin = lr[0];
	ll rmax = lr[q*2-1];

	for(i=lmin;i<=rmax;i+=2) {
		if (pf(i)&&pf((i+1)/2)) ans[i] = 1;
	}
	//for(i=lmin;i<=rmax;i+=2) cout << ans[i] << " ";
	//cout << endl;
	for(i=lmin;i<=rmax;i++) {
		total[i] = total[i-1] + ans[i];
	}
	//for(i=lmin;i<=rmax+2;i+=2) cout << total[i] << " ";
	//cout << endl;
	for(i=0;i<q;i++) {
		cout << total[r[i]] - total[l[i]-1] << endl;
	}

	return 0;
}
