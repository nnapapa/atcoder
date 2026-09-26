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
	cin >> n >> m;
	map<ll,ll> A;
	for(i=0;i<n;i++) {
		cin >> a;
		//if (A.count(a)) ++A[a];
		//else A[a] = 1;
		A[a]++;
	}
	for(i=0;i<m;i++) {
		cin >> a;
		if (A.count(a)==0) {
			cout << "No" << endl;
			return 0;
		}
		A[a]--;
		if (A[a]==0) A.erase(a);
	}
	cout << "Yes" << endl;
	return 0;
}
