#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,r,u,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	vector<ll>	A(n+1),C(n+1,0);
	for(i=1;i<=n;i++) cin >> A[i];
	queue<ll> q;
	for(i=1;i<=n;i++) {
		if (C[i]) continue;
		a = i;
		while(1) {
			if (A[a]!=a) {
				q.push(a);
				a = A[a];
			} else {
				C[a] = a;
				while(q.size()) {
					C[q.front()] = a;
					q.pop();
				}
				break;
			}
		}
	}
	for (i=1;i<=n;i++) cout << C[i] << " ";
	cout << endl;
	return 0;
}
