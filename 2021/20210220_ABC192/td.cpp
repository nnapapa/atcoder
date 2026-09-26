#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
string x;
ll m,n,z;

lll base(lll b) {
	lll ret = 0;
	for(int i=0;i<n;i++) {
		lll pre = ret;
		ret = ret*b + x[i]-'0';
		if (ret>m) break;
		if (pre > ret) return 1000000000000000001;
	}
	return ret;
}
// 二分探索法
// a[index]が条件(key以上)を満たすかどうか
bool isOK(ll index, ll key) {
    if (base(index)>key) return true;
    else return false;
}
// 汎用的な二分探索のテンプレ(a[]は昇順データ)
ll binary_search(ll key) {
    ll left = z-1; //「index = 0」が条件を満たすこともあるので、初期値は -1
    ll right = m+1; // 「index = a.size()-1」が条件を満たさないこともあるので、初期値は a.size()

    /* どんな二分探索でもここの書き方を変えずにできる！ */
    while (right - left > 1) {
			//cout << left << " " << right << endl;
    	ll mid = (left + right) / 2;
        if (isOK(mid, key)) right = mid;
        else left = mid;
    }

    /* left は条件を満たさない最大の値、right は条件を満たす最小の値になっている */
    //cout << "left=" << left << " right=" << right << endl;
    return left;
}


int main() {
	ll		a,b,c,d,h,i,j,k,l,v,w,y;
	ll		ans = 0;
	cin >> x;
	cin >> m;
	n = x.size();
	if (n==1) {
		if (x[0]-'0' <= m) cout << 1 << endl;
		else cout << 0 << endl;
		return 0;
	}
	a = 0;
	for(i=0;i<n;i++) a = max(a , (ll)x[i]-'0');
	z = a + 1;
	//if (base(z)>m) {cout << 0 << endl; return 0;}
	ans = binary_search(m);

	//vector<ll>	A(n);
	//for(i=0;i<n;i++) cin >> A[i];
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << ans - a << endl;
	return 0;
}
