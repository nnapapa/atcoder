#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = INFL;
	string	s;
	cin >> n >> m;

	vector<pair<ll,ll>>	A(n+m);
	for(i=0;i<n;i++) { cin >> a; A[i] = make_pair(a , 0); }
	for(i=0;i<m;i++) { cin >> a; A[n+i] = make_pair(a , 1); }
	sort(A.begin() , A.end());
	for(i=0;i<n+m;i++) if (A[i].second == 0) {a = i; break;}
	for(i=0;i<n+m;i++) if (A[i].second) {b = i; break;}
	while(a<n+m && b<n+m) {
		ans = min(ans , abs(A[a].first-A[b].first));
		if (A[a].first <= A[b].first) {
			for(a++;a<n+m;a++) if (A[a].second == 0) break;
		} else {
			for(b++;b<n+m;b++) if (A[b].second) break;
		}
	}
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << ans << endl;
	return 0;
}
