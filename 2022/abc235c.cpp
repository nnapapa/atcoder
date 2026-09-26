#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> q;
	vector<ll>	ANS;
	map<ll,vector<ll>> A;
	for(i=1;i<=n;i++) {
		cin >> a;
		A[a].push_back(i);
	}
	for(z=0;z<q;z++) {
		cin >> x >> k;
		a = -1;
		if (A.count(x)) {
			if (A[x].size()>=k) a = A[x][k-1];
		}
		ANS.push_back(a);
		
	}
	for(i=0;i<q;i++) cout << ANS[i] << endl;
	return 0;
}
