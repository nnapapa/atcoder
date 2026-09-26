#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
ll n,mm = INFL;
vector<ll>	aa(200000);
// 二分探索法
bool isOK(int index, int key) {
		ll ret = 0;
		for(ll i=0;i<n;i++) ret += abs(aa[i]-index);
    if (ret <= mm) { mm = ret; return true; }
    else return false;
}
// 汎用的な二分探索のテンプレ(a[]は昇順データ)
int binary_search(int key) {
    int left = -1000000000; //「index = 0」が条件を満たすこともあるので、初期値は -1
    int right = 1000000000; // 「index = a.size()-1」が条件を満たさないこともあるので、初期値は a.size()

    /* どんな二分探索でもここの書き方を変えずにできる！ */
    while (right - left > 1) {
        int mid = left + (right - left) / 2;

        if (isOK(mid, key)) right = mid;
        else left = mid;
    }

    /* left は条件を満たさない最大の値、right は条件を満たす最小の値になっている */
    //cout << "left=" << left << " right=" << right << endl;
    return left;
}

int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;

	for(i=0;i<n;i++) cin >> aa[i];
	for(i=0;i<n;i++) aa[i] -= i+1;

	b = binary_search(1000000000);

	ans += abs(aa[i]-b);
	cout << b << endl;
	cout << ans << endl;
	return 0;
}
