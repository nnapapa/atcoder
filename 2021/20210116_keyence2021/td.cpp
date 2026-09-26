#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
const ll MOD = 998244353LL;
// 繰り返し二乗法 (xのn乗 % MOD)
// x,nに指定する固定値はLLをつけること(2^nのとき、2でWA、2LLでAC)
ll modpow(ll x, ll n) {
    ll ret = 1;
    while (n > 0) {
        if (n & 1) ret = ret * x % MOD;  // n の最下位bitが 1 ならば x^(2^i) をかける
        x = x * x % MOD;
        n >>= 1;  // n = n / 2
    }
    return ret;
}

int main() {
	ll		a,b,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> h >> w >> k;
	char c;
	//vector<ll>	A(n);
	//for(i=0;i<n;i++) cin >> A[i];
	//vector<ll>	dp(n+1,INFL);
	vector<vector<ll>>	masu(h+2 , vector<ll>(w+2,0));
	vector<vector<char>>	moji(h+2 , vector<char>(w+2,' '));
	vector<tuple<ll,ll,char>> xyc(k);
	for(i=0;i<k;i++) {
		cin >> x >> y >> c;
		moji[x][y] = c;
		xyc[i] = make_tuple(x , y , c);
	}
	masu[1][1] = 1;
	for(x=1;x<=h;x++) {
		for(y=1;y<=w;y++) {
			if (x==1 && y==1) continue;
			n = m = 1;
			if (moji[x][y-1]=='D') n = 0;
			if (moji[x-1][y]=='R') m = 0;
			masu[x][y] = ( masu[x][y-1]*n%MOD + masu[x-1][y]*m%MOD ) %MOD;
		}
	}
	ans = masu[h][w] * modpow(3 , h*w-k) % MOD;

	a = 0;
	for(x=1;x<=h;x++) {
		for(y=w;y>=1;y--) {
			if (moji[x][y]=='0') a++;
			if (moji[x][y]!='R') break;
		}
	}

	for(y=1;y<=w;y++) {
		for(x=h;x>=1;x--) {
			if (moji[x][y]=='0') a++;
			if (moji[x][y]!='D') break;
		}
	}

	ans = masu[h][w] * modpow(3 , h*w-k-a) % MOD;
	b = masu[h][w] * modpow(2 , a) % MOD;
	ans = (ans + b) % MOD;
/*
	for(x=1;x<=h;x++) {
		for(y=1;y<=w;y++) {
			cout << moji[x][y];
		}
		cout << endl;
	}

	for(x=1;x<=h;x++) {
		for(y=1;y<=w;y++) {
			cout << masu[x][y] << ' ';
		}
		cout << endl;
	}*/
	cout << ans << endl;
	return 0;
}
