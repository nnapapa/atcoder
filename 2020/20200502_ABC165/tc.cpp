//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

ll n,m,q,ans = 0;
vector<ll> a(51),b(51),c(51),d(51);


void calc(vector<int> A, ll index) {
	if (index==n) {
		// check  update ans
		ll tmp = 0;
		for(int i=0;i<q;i++) {
			if (A[b[i]]-A[a[i]]==c[i]) tmp += d[i];
		}
		ans = max(ans , tmp);
		return;
	}

	for(int i=A[index]; i<=m; i++) {
	//for(int i=A[index]; i<=m-(n-index-1); i++) {
		A[index+1] = i;
		calc(A , index+1);
	}
}
int main() {
	ll		i,j,k,x,y;

	cin >> n >> m >> q;
	vector<int> A(n+1);

	for(i=0;i<q;i++) {
		cin >> a[i] >> b[i] >> c[i] >> d[i];
	}

	//for(i=1;i<=m-(n-1);i++) {
	for(i=1;i<=m;i++) {
		A[1] = i;
		calc(A , 1);
	}

	cout << ans << endl;

}
