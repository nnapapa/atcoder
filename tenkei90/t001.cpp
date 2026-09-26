#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
int k , n , l;
int ans = 0;
vector<ll>	A(100002);

// 二分探索法
bool isOK(ll index) {
		bool f = false; //index値以上で切れればtrue
    ll p = 0 , y = 0;
		for(ll i=1;i<=n;i++) {
			y += A[i] - A[i-1];
			if (y>=index) {
				y = 0;
				p++;
				if (p==k) {
					if (l-A[i]>=index) f = true;
				}
			}
		}
    return f;
}


int main() {
	cin >> n >> l;
	cin >> k;
	for(int i=1;i<=n;i++) cin >> A[i];
	A[n+1] = l;

	ll left = 0;
	ll right = l;
	while (right - left > 1) {
		ll mid = (left + right) / 2;
			if (isOK(mid)) left = mid;
			else right = mid;
	}

	cout << left << endl;
	return 0;
}
