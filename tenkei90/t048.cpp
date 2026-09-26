#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n >> k;
	vector<pair<ll,ll>>	BA(n);
	for(i=0;i<n;i++) cin >> BA[i].second >> BA[i].first;
	for(i=0;i<n;i++) BA[i].second -= BA[i].first;
	sort(BA.begin(),BA.end());
	reverse(BA.begin(),BA.end());
	priority_queue<ll> que;
	ll bi=1;
	ans = BA[0].first;
	que.push(BA[0].second);
	que.push(-1);
	for(i=1;i<k;i++) {
		if (BA[bi].first >= que.top()) {
			ans += BA[bi].first;
			que.push(BA[bi++].second);
		} else {
			ans += que.top();
			que.pop();
		}
	}

	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << ans << endl;
	return 0;
}
