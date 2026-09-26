#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

void testcase() {
	ll		a,b,c,d,h,i,j,k,l,m,n,t,q,r,u,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;
	vector<ll>	A(n),B(n);
	for(i=0;i<n;i++) cin >> A[i];
	B = A;
	priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> que;
	for(i=0;i<n;i++) que.push(make_pair(A[i],i));
	pair<ll,ll> p;
	while(que.size()) {
		p = que.top();
		que.pop();
		tie(a,i) = p;
		if (a!=A[i]) continue;
		if ((i>0)&&(abs(A[i]-A[i-1])>1)) {
			if (A[i]<A[i-1]) {
				A[i-1] = A[i]+1;
				que.push(make_pair(A[i-1],i-1));
			} else {
				A[i] = A[i-1]+1;
				que.push(make_pair(A[i],i));
			}
		}
		if ((i<n-1)&&(abs(A[i]-A[i+1])>1)) {
			if (A[i]<A[i+1]) {
				A[i+1] = A[i]+1;
				que.push(make_pair(A[i+1],i+1));
			} else {
				A[i] = A[i+1]+1;
				que.push(make_pair(A[i],i));
			}
		}
	}
	for(i=0;i<n;i++) ans += B[i] - A[i]; 
	cout << ans << endl;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		testcase();
	}
	return 0;
}
