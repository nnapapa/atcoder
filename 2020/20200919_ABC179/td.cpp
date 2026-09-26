#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INFL 0x6fffffffffffffffLL

ll lr[200005];
vector<ll> dp(200005);
ll n;

// 二分探索法
// index が条件を満たすかどうか
bool isOK(int index, int key) {
    if (key < lr[index]) return true;
    else return false;
}
// 汎用的な二分探索のテンプレ
int binary_search(int key) {
    int left = -1; //「index = 0」が条件を満たすこともあるので、初期値は -1
    int right = n+1; // 「index = a.size()-1」が条件を満たさないこともあるので、初期値は a.size()

    /* どんな二分探索でもここの書き方を変えずにできる！ */
    while (right - left > 1) {
        int mid = left + (right - left) / 2;

        if (isOK(mid, key)) right = mid;
        else left = mid;
    }

    /* left は条件を満たさない最大の値、right は条件を満たす最小の値になっている */
    return left;
}

int main() {
	ll		b,c,d,h,i,j,k,l,r,m,v,w,x,y,z;
	ll		ans = 0;
	cin >> n >> k;
	x = 0;
	for(i=0;i<k;i++) {
		cin >> l >> r;
		for(j=l;j<=r;j++) lr[x++] = j;
	}
	sort(lr,lr+x);
	for(i=x;i<=n;i++) lr[i] = INFL;

for(i=0;i<=n;i++) cout << lr[i] << ' ';
cout << endl;

	dp[0] = 0;
	for(i=1;i<=n;i++) {
		x = binary_search(i)+1;
		dp[i] = dp[i-1] + x;
cout << i << ":" << x << " " << dp[i] << endl;
	}
	

	cout << dp[n] << endl;
	return 0;
}
