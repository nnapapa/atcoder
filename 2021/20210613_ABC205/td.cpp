#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
vector<ll> A(100001,0);
bool isOK(ll index , ll key) {
	    if (key <= A[index]-index) return true;
    else return false;
}
int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z,q;
	string	s;
	cin >> n >> q;

	vector<ll>	K(q),R(n+1,1),ans(q);
	//map<ll,ll> mp;
	for(i=1;i<=n;i++) {
		cin >> a;
		A[i] = a;
		//mp[a] = i;
	}
	for(i=n-1,j=1;i>0;i--) {
		if (A[i+1]==A[i]+1) R[i] = ++j;
		else j = 1;
	}


	for(i=0;i<q;i++) 	cin >> K[i];

	for(i=0;i<q;i++) {
		k = K[i];
    ll left = 0; //「index = 0」が条件を満たすこともあるので、初期値は -1
    ll right = n+1; // 「index = a.size()-1」が条件を満たさないこともあるので、初期値は a.size()

    /* どんな二分探索でもここの書き方を変えずにできる！ */
    while (right - left > 1) {
    	ll mid = (left + right) / 2;
        if (isOK(mid, k)) right = mid;
        else left = mid;
    }

    /* left は条件を満たさない最大の値、right は条件を満たす最小の値になっている */
    //cout << "left=" << left << " right=" << right << endl;
    ans[i] = left + k;
		//if (mp[k]>0) ans[i] += R[mp[k]];

	}
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	for(i=0;i<q;i++) cout << ans[i] << endl;
	return 0;
}
