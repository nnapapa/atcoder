#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
// 繰り返し二乗法 (xのn乗)
ll pow(ll x, ll n) {
    ll ret = 1;
    while (n > 0) {
        if (n & 1) ret *= x;  // n の最下位bitが 1 ならば x^(2^i) をかける
        x *= x;
        n >>= 1;  // n = n / 2
    }
    return ret;
}
vector<string>	F(60);
ll kumi(ll index, bool f, bool kitai, ll cur) {
	ll ret;
	if (index==0) {
		if (kitai) {
			if ( f && F[0]=="AND") return cur;
			if ( f && F[0]=="OR" ) return 2*cur;
			if (!f && F[0]=="AND") return 0;
			if (!f && F[0]=="OR" ) return cur;
		} else {
			if ( f && F[0]=="AND") return cur;
			if ( f && F[0]=="OR" ) return 0;
			if (!f && F[0]=="AND") return 2*cur;
			if (!f && F[0]=="OR" ) return cur;			
		}
	}

	if (kitai) {
		if (f) {
			if (F[index]=="AND" ) {
				return kumi(index-1,true,true,cur);
			} else {
				return kumi(index-1,true,true,cur) + kumi(index-1,false,true,cur);
			}
		} else {
			if (F[index]=="AND") {
				return 0;
			} else {
				return kumi(index-1,true,true,cur);
			}
		}
	}
}
int main() {
	ll		a,b,c,d,h,i,j,k,l,m,n,v,w,x,y,z;
	ll		ans = 0;
	string	s;
	cin >> n;

	for(i=0;i<n;i++) cin >> F[i];
	ans = kumi(n-1,true,true,1);
	ans += kumi(n-1,false,true,1);


	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y,INFL));

	cout << ans << endl;
	return 0;
}
