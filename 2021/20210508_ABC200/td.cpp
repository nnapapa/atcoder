#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using lll = __int128;
using ll = long long;
#define INFL 0x6fffffffffffffffLL
ll n , x , y;
vector<ll>	A(200);
vector<vector<ll>> ANS(2 , vector<ll>(201));

bool calc(ll amari) {
	ll	a,b,c,i,j,k;
	ll ret=0;
	for(i=1;i<(1<<min(n,8LL));i++) {
		for(j=0,a=0;j<8;j++) if (i&(1<<j)) a+=A[j]; 
		if (a%200==amari) {
			for(k=0,a=0;k<8;k++) if (i&(1<<k)) ANS[ret][a++] = k+1;
			if (ret==0) x = a; else y = a;
			if (++ret==2) return true;
		}
	}
	return false;
}
int main() {
	ll		i;
	cin >> n;
	for(i=0;i<n;i++) cin >> A[i];
	bool f;
	for(i=0;i<200;i++) if (f = calc(i)) break;
	if (f) {
		cout << "Yes" << endl;
		cout << x;
		for(i=0;i<x;i++) cout << " " << ANS[0][i];
		cout << endl;
		cout << y;
		for(i=0;i<y;i++) cout << " " << ANS[1][i];
		cout << endl;
	} else {
		cout << "No" << endl;
	}
	return 0;
}
