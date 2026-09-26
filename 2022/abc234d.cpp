#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	string	s;
	cin >> n >> k;
	vector<ll>	P(n),ans;
	for(i=0;i<n;i++) cin >> P[i];
	priority_queue<ll, vector<ll>, greater<ll>> que;
	for(i=0;i<k;i++) {
		que.push(P[i]);
	}
	a = que.top();
	ans.push_back(a);
	for(;i<n;i++) {
		a = que.top();
		if (P[i]>a) {
			que.push(P[i]);
			que.pop();
		}
		ans.push_back(que.top());
	}

	for(i=0;i<ans.size();i++) cout << ans[i] << endl;
	return 0;
}
