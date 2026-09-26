//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF 0x6fffffff
#define INFL 0x6fffffffffffffffLL

int main() {
	ll		a,r,b,c,i,j,k,n,m,x,y,ans = 0;
	string	s;
	cin >> a >> r >> n;

	if (r>1) {
		i = 0;
		while( a <= 1000000000 ) {
			i++;
			if (i == n) break;
			a *= r;
		}
	}
	if (a <= 1000000000 ) {
		cout << a << endl;
	} else {
		cout << "large" << endl;
	}
	//vector<ll>	aa(n);
	//for(i=0;i<n;i++) cin >> aa[i];
	//vector<ll>	dp(n+1,INFL);
	//vector<vector<ll>>	dp2(x , vector<ll>(y));

	
	return 0;
}
