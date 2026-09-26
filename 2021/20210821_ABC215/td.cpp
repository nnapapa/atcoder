#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

ll gcd(ll m, ll n) {
	ll temp;
	if (n > m) swap(m , n);
	while (m % n != 0)
	{
		temp = n;
		n = m % n;
		m = temp;
	}
	return n;
}

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> m;
	vector<ll>	A(n) , ANS(100001,0);
	for(i=0;i<n;i++) cin >> A[i];

	map<ll,ll> yaku;
	for(x=0;x<n;x++) {
		for(i=1;i*i<=A[x];i++) {
			if (A[x]%i==0) {
				yaku[i]=1;
				if (i*i!=A[x]) yaku[A[x]/i]=1;
			}
		}
	}
	for(auto p:yaku) {
		if (p.first==1) continue;
		a = 1;
		while(p.first*a<=m) ANS[p.first*a++]=1;
	}
	for(i=0;i<n;i++) {
		if (A[i]==1) continue;
		a = 1;
		while(A[i]*a<=m) ANS[A[i]*a++]=1;
	}
	/*
	for(i=1;i<=m;i++) {
		bool f = true;
		for(auto p:yaku) {
			if (gcd(p.first , i)!=1) {
				f = false;
				break;
			}
		}
		if (f) {
			ans++;
			ANS.push_back(i);
		}
	}
	*/
	ans = 1;
	for(i=2;i<=m;i++) if (ANS[i]==0) ans++;
	cout << ans << endl << 1 << endl;;
	for(i=2;i<=m;i++) if (ANS[i]==0) cout << i << endl;
	return 0;
}
