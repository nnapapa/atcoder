#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,q,h,i,j,k,l,m,n,v,w,x,y,z,t;
	string	s;
	cin >> n >> q;
	vector<ll>	A(500000),ans;
	b = 200005;
	for(i=0;i<n;i++) cin >> A[b+i];
	for(i=0;i<q;i++) {
		cin >> t >> x >> y;
		if (t==1) swap(A[b+x-1],A[b+y-1]);
		if (t==2) {
			a = A[--b+n];
			A[b] = a;
		}
		if (t==3) ans.push_back(A[b+x-1]);
		//for(j=b;j<b+n;j++) cout << A[j] << " " ;
		//cout << endl;
	}
	for(i=0;i<ans.size();i++) cout << ans[i] << endl;
	return 0;
}
