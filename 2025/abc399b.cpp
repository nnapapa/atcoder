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
	cin >> n;
	vector<ll>	P(n),Q(n),R(n);
	for(i=0;i<n;i++) cin >> P[i];
	for(i=0;i<n;i++) Q[i] = P[i];
	sort(Q.begin(),Q.end());
	reverse(Q.begin(),Q.end());
	for(i=0,r=0,x=-1;i<n;i++) {
		r++;
		if (Q[i]!=x) {
			x = Q[i];
			R[i] = r;
		} else {
			R[i] = R[i-1];
		}
		
	}

	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			if (P[i]==Q[j]) {
				cout << R[j] << endl;
				break;
			}
		}
	}

	return 0;
}
