#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,s,u,v,w,x,y,z;
	ll		ans = 0;
	cin >> n >> k;
	vector<ll>	A(n),B(n),C(n);
	for(i=0;i<n;i++) cin >> A[i] >> B[i] >> C[i];
	priority_queue<pair<ll,ll>, vector<pair<ll,ll>>, greater<pair<ll,ll>>> que;
	s=0;t=0;a=0;w=INFL;
	while(w != -1) {
		if (que.size()) {
			tie(x,y) = que.top();
		} else {
			x = y = INFL;
		}
		if ( (s==n && x!=INFL) || (s<n && x<= A[s])) {
			que.pop();
			a -= y;
			t = x;
		} else if (s<n) {
			t = A[s];
			if (w==INFL) w = s;
			s++;
		}
		while(1) {
			if (w!=INFL && w!=-1 && a+C[w]<=k) {
				a += C[w];
				que.push(make_pair(t+B[w],C[w]));
				if (w+1<s) w++;
				else if (w+1==n) w = -1;
				else w = INFL;
				cout << t << endl;
			} else {
				break;
			}
		}
	}

	return 0;
}
