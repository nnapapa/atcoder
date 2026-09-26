#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
 
int main() {
	ll		a,b,c,d,e,h,i,j,k,l,m,n,t,q,r,v,w,x,y,z;
	ll		ans = 0;
	cin >> n >> d;
 
	vector<pair<ll,ll>>	LR(n);
	for(i=0;i<n;i++) cin >> LR[i].second >> LR[i].first;
	sort(LR.begin(),LR.end());
	for(i=0;i<n;i++) swap(LR[i].second,LR[i].first);
	
	a = -1*INFL;
	for(i=0;i<n;i++) {
		if (LR[i].first > a+d-1) {
			a = LR[i].second;
			ans++;
		}
	} 


	cout << ans << endl;
 
	return 0;
}