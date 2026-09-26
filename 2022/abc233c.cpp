#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
ll n,x,ans;
void calc(vector<ll> &L, vector<vector<ll>> &A, ll idx,ll data) {
	if (data>x) return;
	if (idx==n) {
		if (data==x) ans++;
		return;
	}
	for(int i=0;i<L[idx];i++) {
		lll data1 = (lll)data * (lll)A[idx][i];
		if (data1 <= (lll)x) calc(L, A, idx+1, (ll)data1);
	}
}
int main() {
	ll		a,b,c,d,h,i,j,k,l,m,t,q,r,v,w,y,z;
	ans = 0;
	cin >> n >> x;
	vector<ll> L(n);
	vector<vector<ll>> A(n);
	for(i=0;i<n;i++) {
		cin >> L[i];
		for(j=0;j<L[i];j++) {
			cin >> a;
			A[i].push_back(a);
		}
	}
	calc(L, A, 0, 1);

	cout << ans << endl;
	return 0;
}
