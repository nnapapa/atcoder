#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	vector<ll>		ans;
	deque<ll> 		Y;
	cin >> n;
	for(i=0;i<n;i++) {
		cin >> a >> x;
		if (a==1) {
			Y.push_front(x);
		} else if (a==2) {
			Y.push_back(x);
		} else {
			ans.push_back(Y[x-1]);
		}
	}

	for(i=0;i<ans.size();i++)	cout << ans[i] << endl;
	return 0;
}
