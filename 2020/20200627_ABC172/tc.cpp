//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

ll n , m , k;
vector<ll> bt(200001);

// 二分探索法
// index が条件を満たすかどうか
bool isOK(ll index, ll key) {
    if (key < bt[index]) return true;
    else return false;
}
// 汎用的な二分探索のテンプレ
ll binary_search(ll key) {
    ll left = -1; //「index = 0」が条件を満たすこともあるので、初期値は -1
    ll right = m+1; // 「index = a.size()-1」が条件を満たさないこともあるので、初期値は a.size()

    /* どんな二分探索でもここの書き方を変えずにできる！ */
    while (right - left > 1) {
        ll mid = left + (right - left) / 2;

        if (isOK(mid, key)) right = mid;
        else left = mid;
    }

    /* left は条件を満たさない最大の値、right は条件を満たす最小の値になっている */
    return left;
}

int main() {
	ll		a,b,c,h,i,j,l,x,y;
	ll		ans = 0;
	cin >> n >> m >> k;

	vector<ll>	aa(n) , bb(m) , at(n+1);
	for(i=0;i<n;i++) cin >> aa[i];
	for(i=0;i<m;i++) cin >> bb[i];

	for(i=0;i<n;i++) at[i+1] = at[i] + aa[i];
	for(i=0;i<m;i++) bt[i+1] = bt[i] + bb[i];	
	
	for(i=0;i<=n;i++) {
		if(at[i]>k) break;
		l = k - at[i];
		x = binary_search(l);
		ans = max(ans , i+x);
	}
	cout << ans << endl;
	return 0;
}
